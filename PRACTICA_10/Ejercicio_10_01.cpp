// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala ALiaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 1

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ofstream archivo("nombres.txt");
    if (!archivo) 
    {
        cout << "No se pudo crear el archivo." << endl;
        return 1;
    }

    int n;
    cout << "¿Cuántos nombres desea ingresar? ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) 
    {
        string nombre;
        cout << "Ingrese el nombre " << i+1 << ": ";
        getline(cin, nombre);
        archivo << nombre << endl;
    }
    archivo.close();

    ifstream archivoLectura("nombres.txt");
    string linea;
    cout << "\nNombres en el archivo:" << endl;
    while (getline(archivoLectura, linea)) 
    {
        cout << linea << endl;
    }
    archivoLectura.close();
    return 0;
}

