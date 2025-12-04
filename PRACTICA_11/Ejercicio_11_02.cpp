// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaa
// Fecha creación: 04/12/2025
// Número de ejercicio: 2

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

struct Producto 
{
    int codigo;
    char nombre[30];
    int cantidadInicial;
    double precioUnitario;
};

struct Venta 
{
    char ci[15];
    char nombreCliente[30];
    int codigoProducto;
    int cantidad;
};

void AdicionarProducto(string archivoProductos);
void ListadoProductos(string archivoProductos, string archivoVentas);
void BuscarProducto(string archivoProductos);
void ModificarProducto(string archivoProductos);
void AdicionarVenta(string archivoProductos, string archivoVentas);
void MenuFarmacia(string archivoProductos, string archivoVentas);

int main() 
{
    string archivoProd = "PRODUCTOS.BIN";
    string archivoVentas = "VENTAS.txt";
    MenuFarmacia(archivoProd, archivoVentas);
    return 0;
}


void AdicionarProducto(string archivoProductos) 
{
    Producto prod;
    ofstream archivo(archivoProductos, ios::binary | ios::app);
    if(!archivo){ cout << "Error al abrir archivo.\n"; return; }

    cout << "Codigo Producto: "; cin >> prod.codigo; cin.ignore();
    cout << "Nombre Producto: "; cin.getline(prod.nombre,30);
    cout << "Cantidad Inicial: "; cin >> prod.cantidadInicial;
    cout << "Precio Unitario: "; cin >> prod.precioUnitario;

    archivo.write((char*)&prod,sizeof(Producto));
    archivo.close();
}

void ListadoProductos(string archivoProductos, string archivoVentas)
{
    ifstream prodFile(archivoProductos, ios::binary);
    if(!prodFile){ cout << "No se pudo abrir productos.\n"; return; }

    Producto prod;
    Venta venta;
    int cantidadVendida;
    double total;
    ifstream ventFile(archivoVentas);

    cout << "CODIGO NOMBRE CANTIDAD PRECIO CANTIDAD VENDIDA TOTAL\n";

    while(prodFile.read((char*)&prod,sizeof(Producto)))
    {
        cantidadVendida = 0;
        ventFile.clear(); ventFile.seekg(0);
        while(ventFile >> venta.ci){
            ventFile.ignore(); // ;
            ventFile.getline(venta.nombreCliente,30,';');
            ventFile >> venta.codigoProducto; ventFile.ignore();
            ventFile >> venta.cantidad; ventFile.ignore();
            if(venta.codigoProducto == prod.codigo) cantidadVendida += venta.cantidad;
        }
        total = cantidadVendida * prod.precioUnitario;
        cout << prod.codigo << " " << prod.nombre << " " << prod.cantidadInicial << " " 
             << prod.precioUnitario << " " << cantidadVendida << " " << total << endl;
    }
    prodFile.close();
    ventFile.close();
}

void BuscarProducto(string archivoProductos)
{
    ifstream archivo(archivoProductos, ios::binary);
    if(!archivo){ cout << "No se pudo abrir archivo.\n"; return; }

    int cod; cout << "Ingrese codigo a buscar: "; cin >> cod;
    Producto prod;
    bool encontrado = false;
    while(archivo.read((char*)&prod,sizeof(Producto))){
        if(prod.codigo == cod){
            cout << "Producto encontrado: " << prod.nombre << " - Cantidad: " << prod.cantidadInicial
                 << " - Precio: " << prod.precioUnitario << endl;
            encontrado = true;
            break;
        }
    }
    if(!encontrado) cout << "Producto no encontrado.\n";
    archivo.close();
}


void ModificarProducto(string archivoProductos)
{
    fstream archivo(archivoProductos, ios::binary | ios::in | ios::out);
    if(!archivo){ cout << "No se pudo abrir archivo.\n"; return; }

    int cod; cout << "Ingrese codigo a modificar: "; cin >> cod;
    Producto prod; bool encontrado=false;
    while(archivo.read((char*)&prod,sizeof(Producto)) && !encontrado)
    {
        if(prod.codigo == cod){
            encontrado=true;
            cout << "Nuevo nombre: "; cin.ignore(); cin.getline(prod.nombre,30);
            cout << "Nueva cantidad: "; cin >> prod.cantidadInicial;
            cout << "Nuevo precio: "; cin >> prod.precioUnitario;
            archivo.seekp(-sizeof(Producto), ios::cur);
            archivo.write((char*)&prod,sizeof(Producto));
        }
    }
    if(!encontrado) cout << "Producto no encontrado.\n";
    archivo.close();
}


void AdicionarVenta(string archivoProductos, string archivoVentas)
{
    Venta vent;
    ofstream archivo(archivoVentas, ios::app);
    if(!archivo){ cout << "No se pudo abrir archivo de ventas.\n"; return; }

    cout << "CI Cliente: "; cin >> vent.ci; cin.ignore();
    cout << "Nombre Cliente: "; cin.getline(vent.nombreCliente,30);
    cout << "Codigo Producto: "; cin >> vent.codigoProducto;
    cout << "Cantidad: "; cin >> vent.cantidad;
    archivo << vent.ci << "; " << vent.nombreCliente << "; " << vent.codigoProducto << "; " << vent.cantidad << endl;
    archivo.close();
}


void MenuFarmacia(string archivoProductos, string archivoVentas)
{
    int opcion;
    do{
        cout << "\nMENU FARMACIAS CHAVEZ\n";
        cout << "1. Adicionar Producto\n2. Listado de Productos\n3. Buscar Producto\n";
        cout << "4. Modificar Producto\n5. Adicionar Venta\n0. Salir\n";
        cout << "Seleccione opcion: "; cin >> opcion;
        switch(opcion){
            case 1: AdicionarProducto(archivoProductos); break;
            case 2: ListadoProductos(archivoProductos, archivoVentas); break;
            case 3: BuscarProducto(archivoProductos); break;
            case 4: ModificarProducto(archivoProductos); break;
            case 5: AdicionarVenta(archivoProductos, archivoVentas); break;
            case 0: break;
            default: cout << "Opcion invalida.\n";
        }
    }while(opcion!=0);
}

