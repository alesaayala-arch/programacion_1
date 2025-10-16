// Materia: Programación I, Paralelo 3
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 16/10/2024
// Número de ejercicio: 4

#include <iostream>
using namespace std;


void generarMatriz(int n) 
{
    int matriz[20][20]; 

    for (int i = 0; i < n; i++) 
    {
        int inicio = 1 + 2 * i;
        for (int j = 0; j < n; j++) 
        {
            matriz[i][j] = inicio + j; 
        }
    }

    cout << "\nMatriz generada de orden " << n << "x" << n << ":\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() 
{
    int n;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    generarMatriz(n);

    return 0;
}