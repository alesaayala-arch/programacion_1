// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala ALiaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 5

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{

    ofstream archivo("productos.txt");
    int n;
    cout << "Cuantos productos desea ingresar? ";
    cin >> n;
    string nombre;
    double precio;
    for(int i=0; i<n; i++)
    {
        cout << "Nombre producto " << i+1 << ": ";
        cin >> nombre;
        cout << "Precio: ";
        cin >> precio;
        archivo << nombre << " " << precio << endl;
    }
    archivo.close();

    ifstream entrada("productos.txt");
    ofstream temp("temp.txt");
    cout << "Ingrese nombre del producto a actualizar: ";
    cin >> nombre;
    cout << "Ingrese nuevo precio: ";
    cin >> precio;

    bool encontrado = false;
    string nom;
    double pre;
    while (entrada >> nom >> pre) 
    {
        if (nom == nombre) 
        {
            pre = precio;
            encontrado = true;
        }
        temp << nom << " " << pre << endl;
    }
    if (!encontrado) 
    {
        temp << nombre << " " << precio << endl;
    }
    entrada.close();
    temp.close();

    remove("productos.txt");
    rename("temp.txt","productos.txt");

    cout << "Archivo 'productos.txt' actualizado correctamente." << endl;
    return 0;
}
