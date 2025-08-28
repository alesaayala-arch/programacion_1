// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 28/08/2025
// Número de ejercicio: 15

#include <iostream>
using namespace std;

int main() 
{
    int cantidad;        
    double nota, suma = 0.0;

    cout << "Ingrese la cantidad de notas: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) 
    {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        suma = suma + nota; 
    }

    cout << "El promedio es: " << (suma / cantidad) << endl;
}
