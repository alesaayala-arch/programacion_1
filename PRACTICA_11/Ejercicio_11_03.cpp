// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaa
// Fecha creación: 04/12/2025
// Número de ejercicio: 3

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

struct Pizza 
{
    int codigo;
    char nombre[30];
    char tipo[20]; 
    char tamano[20]; 
    double precio;
};

struct VentaPizza
{
    char ci[15];
    int codigoPizza;
    char tamano[20];
    int cantidad;
};

void AdicionarPizza(string archivoPizzas);
void ListadoPizzas(string archivoPizzas, string archivoVentas);
void ModificarPrecio(string archivoPizzas);
void EliminarPizza(string archivoPizzas);
void AdicionarVentaPizza(string archivoPizzas, string archivoVentas);
void MenuPizzeria(string archivoPizzas, string archivoVentas);

int main() 
{
    string archivoPizzas = "PRODUCTO.BIN";
    string archivoVentas = "VENTAS.TXT";
    MenuPizzeria(archivoPizzas, archivoVentas);
    return 0;
}


void AdicionarPizza(string archivoPizzas)
{
    Pizza p;
    ofstream archivo(archivoPizzas, ios::binary | ios::app);
    if(!archivo){ cout << "Error al abrir archivo.\n"; return; }

    cout << "Codigo: "; cin >> p.codigo; cin.ignore();
    cout << "Nombre: "; cin.getline(p.nombre,30);
    cout << "Tipo (TRADICIONAL/ESPECIAL): "; cin.getline(p.tipo,20);
    cout << "Tamano: "; cin.getline(p.tamano,20);
    cout << "Precio base: "; cin >> p.precio; cin.ignore();

   
    if(strcmp(p.tipo,"ESPECIAL")==0 || strcmp(p.tipo,"Especial")==0)
    {
        p.precio = p.precio * 1.1;
    }
    archivo.write((char*)&p,sizeof(Pizza));
    archivo.close();
}


void ListadoPizzas(string archivoPizzas, string archivoVentas)
{
    ifstream pFile(archivoPizzas, ios::binary);
    if(!pFile){ cout << "No se pudo abrir archivo de pizzas.\n"; return; }

    Pizza p; VentaPizza v;
    int totalCant; double totalVenta;
    ifstream vFile(archivoVentas);

    cout << "CODIGO NOMBRE TIPO TAMANO PRECIO CANTIDAD TOTAL\n";

    while(pFile.read((char*)&p,sizeof(Pizza)))
    {
        totalCant=0; totalVenta=0;
        vFile.clear(); vFile.seekg(0);
        while(vFile >> v.ci)
        {
            vFile.ignore(); 
            vFile >> v.codigoPizza; vFile.ignore();
            vFile.getline(v.tamano,20,';');
            vFile >> v.cantidad; vFile.ignore();
            if(v.codigoPizza==p.codigo && strcmp(v.tamano,p.tamano)==0)
            {
                totalCant += v.cantidad;
            }
        }
        totalVenta = totalCant * p.precio;
        cout << p.codigo << " " << p.nombre << " " << p.tipo << " " << p.tamano 
             << " " << p.precio << " " << totalCant << " " << totalVenta << endl;
    }
    pFile.close(); vFile.close();
}

void ModificarPrecio(string archivoPizzas)
{
    fstream archivo(archivoPizzas, ios::binary | ios::in | ios::out);
    if(!archivo){ cout << "No se pudo abrir archivo.\n"; return; }

    int cod; cout << "Codigo a modificar: "; cin >> cod;
    Pizza p; bool encontrado=false;
    while(archivo.read((char*)&p,sizeof(Pizza)) && !encontrado)
    {
        if(p.codigo==cod)
        {
            encontrado=true;
            cout << "Nuevo precio: "; cin >> p.precio;
            archivo.seekp(-sizeof(Pizza), ios::cur);
            archivo.write((char*)&p,sizeof(Pizza));
        }
    }
    if(!encontrado) cout << "Pizza no encontrada.\n";
    archivo.close();
}


void EliminarPizza(string archivoPizzas)
{
    fstream archivo(archivoPizzas, ios::binary | ios::in | ios::out);
    if(!archivo){ cout << "No se pudo abrir archivo.\n"; return; }

    int cod; cout << "Codigo a eliminar: "; cin >> cod;
    Pizza p; bool encontrado=false;
    while(archivo.read((char*)&p,sizeof(Pizza)) && !encontrado)
    {
        if(p.codigo==cod){
            encontrado=true;
            p.codigo=0; p.nombre[0]='\0'; 
            archivo.seekp(-sizeof(Pizza), ios::cur);
            archivo.write((char*)&p,sizeof(Pizza));
        }
    }
    if(!encontrado) cout << "Pizza no encontrada.\n";
    archivo.close();
}


void AdicionarVentaPizza(string archivoPizzas, string archivoVentas)
{
    VentaPizza v;
    ofstream archivo(archivoVentas, ios::app);
    if(!archivo){ cout << "No se pudo abrir archivo.\n"; return; }

    cout << "CI Cliente: "; cin >> v.ci; cin.ignore();
    cout << "Codigo Pizza: "; cin >> v.codigoPizza; cin.ignore();
    cout << "Tamano: "; cin.getline(v.tamano,20);
    cout << "Cantidad: "; cin >> v.cantidad;
    archivo << v.ci << "; " << v.codigoPizza << "; " << v.tamano << "; " << v.cantidad << endl;
    archivo.close();
}


void MenuPizzeria(string archivoPizzas, string archivoVentas)
{
    int opcion;
    do{
        cout << "\nMENU PIZZERIA ELIS\n";
        cout << "1. Adicionar Pizza\n2. Listado de Pizzas\n3. Modificar Precio\n";
        cout << "4. Eliminar Pizza\n5. Adicionar Venta\n0. Salir\n";
        cout << "Seleccione opcion: "; cin >> opcion; cin.ignore();
        switch(opcion){
            case 1: AdicionarPizza(archivoPizzas); break;
            case 2: ListadoPizzas(archivoPizzas, archivoVentas); break;
            case 3: ModificarPrecio(archivoPizzas); break;
            case 4: EliminarPizza(archivoPizzas); break;
            case 5: AdicionarVentaPizza(archivoPizzas, archivoVentas); break;
            case 0: break;
            default: cout << "Opcion invalida.\n";
        }
    }while(opcion!=0);
}

