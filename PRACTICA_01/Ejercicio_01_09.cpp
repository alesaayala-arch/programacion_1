// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 26/08/2025
// Número de ejercicio: 9

#include <iostream>

using namespace std;

int main()
{
    int edad;
    cout << "Ingresar una edad: " << endl;
    cin >> edad;

    while (edad < 0)
    {
        cout << "Ingresar una edad valida: " << endl;
        cin >> edad;

    }

    if (edad <= 12)
        cout << "La persona es un niño" << endl;
    else if (edad <= 18)
        cout << "La persona es un adolescente" << endl;
    else if ((edad>18) & (edad <60 ))
        cout << "La persona es un mayor de edad" << endl;
    
    else
        cout << "La personas es un adulto mayor" << endl;

    return 0;
}