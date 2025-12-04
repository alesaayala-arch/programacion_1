// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 3

#include <iostream>
#include <string.h>

using namespace std;

struct Estudiante 
{
    int cedula;
    char nombre[40];
    char apellido[40];
    int edad;
    char profesion[40];
    char lugar_nacimiento[40];
    char direccion[60];
    int telefono;
};

int main()
{
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    cin.ignore();

    Estudiante alumnos[200];

    for(int i=0; i<n; i++)
    {
        cout << "\nESTUDIANTE " << i+1 << endl;
        cout << "Cedula: ";
        cin >> alumnos[i].cedula;
        cin.ignore();
        cout << "Nombre: ";
        cin.getline(alumnos[i].nombre, 40);
        cout << "Apellido: ";
        cin.getline(alumnos[i].apellido, 40);
        cout << "Edad: ";
        cin >> alumnos[i].edad;
        cin.ignore();
        cout << "Profesion: ";
        cin.getline(alumnos[i].profesion, 40);
        cout << "Lugar de nacimiento: ";
        cin.getline(alumnos[i].lugar_nacimiento, 40);
        cout << "Direccion: ";
        cin.getline(alumnos[i].direccion, 60);
        cout << "Telefono: ";
        cin >> alumnos[i].telefono;
        cin.ignore();
    }

    cout << "\nDATOS INGRESADOS:\n";
    for(int i = 0; i < n; i++)
    {
        cout << alumnos[i].nombre << " " << alumnos[i].apellido << " - Edad: " 
             << alumnos[i].edad << " - Profesion: " << alumnos[i].profesion << endl;
    }

    return 0;
}
