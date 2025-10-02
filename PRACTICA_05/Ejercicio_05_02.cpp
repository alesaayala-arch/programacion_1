// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 02/10/2025
// Número de ejercicio: 2
// Problema planteado:

#include <iostream>
using namespace std;


void ingresarValores(double voltios[], int n) 
{
    cout << "Ingrese " << n << " valores:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> voltios[i];
    }
}


void mostrarValores(double voltios[], int n) 
{
    cout << "\nValores en el arreglo voltios:" << endl;
    for (int i = 0; i < n; i++) {
        cout << voltios[i] << "\t";
        if ((i + 1) % 3 == 0) 
        { 
            cout << endl;
        }
    }
}

int main() 
{
    const int n = 9; 
    double voltios[n]; 

    ingresarValores(voltios, n);
    mostrarValores(voltios, n);

    return 0;
}