// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 7

#include <iostream>
#include <string.h>

using namespace std;

struct Producto 
{
    char nombre[50];
    char codigo[20];
    float precio;
    int cantidad_en_inventario;
    char observaciones[100];
};

int main()
{
    int N;
    cout << "Ingrese la cantidad de productos: ";
    cin >> N;
    cin.ignore();

    Producto productos[100];

    for(int i=0; i<N; i++)
    {
        cout << "\nPRODUCTO " << i+1 << endl;
        cout << "Nombre: ";
        cin.getline(productos[i].nombre, 50);
        cout << "Codigo: ";
        cin.getline(productos[i].codigo, 20);
        cout << "Precio: ";
        cin >> productos[i].precio;
        cout << "Cantidad en inventario: ";
        cin >> productos[i].cantidad_en_inventario;
        cin.ignore();

        if(productos[i].cantidad_en_inventario < 5)
            strcpy(productos[i].observaciones, "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO");
        else
            strcpy(productos[i].observaciones, ""); 
    }

  
    Producto caro = productos[0];
    int total_cantidad = 0;
    for(int i=0; i<N; i++)
    {
        if(productos[i].precio > caro.precio)
            caro = productos[i];
        total_cantidad += productos[i].cantidad_en_inventario;
    }

    cout << "\nProducto mas caro: " << caro.nombre << " - Precio: " << caro.precio << endl;
    cout << "Cantidad total en inventario: " << total_cantidad << endl;

  
    cout << "\nObservaciones:\n";
    for(int i=0; i<N; i++)
    {
        if(strlen(productos[i].observaciones) > 0)
            cout << productos[i].nombre << ": " << productos[i].observaciones << endl;
    }

    return 0;
}
