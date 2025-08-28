// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 28/08/2025
// Número de ejercicio: 14

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese el numero: ";
    cin >> numero;

    while (numero < 1) {
        cout << "Ingrese un N >= 1: ";
        cin >> numero;
    }

    for (int fila = 1; fila <= numero; fila++) 
    {
        for (int columna = 1; columna <= fila; columna++) 
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}