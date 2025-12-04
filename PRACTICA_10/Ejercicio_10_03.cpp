// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala ALiaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 3

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ofstream archivo("estudiantes.txt");
    if (!archivo) 
    {
        cout << "No se pudo crear el archivo." << endl;
        return 1;
    }

    int n;
    cout << "Número de estudiantes: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string nombre;
        int edad;
        float promedio;
        cout << "Nombre del estudiante " << i+1 << ": ";
        getline(cin, nombre);
        cout << "Edad: ";
        cin >> edad;
        cout << "Promedio: ";
        cin >> promedio;
        cin.ignore();

        archivo << nombre << "," << edad << "," << promedio << endl;
    }
    archivo.close();

    ifstream archivoLectura("estudiantes.txt");
    string linea;
    cout << "\nEstudiantes registrados:" << endl;
    while (getline(archivoLectura, linea)) 
    {
        cout << linea << endl;
    }
    archivoLectura.close();
    return 0;
}
