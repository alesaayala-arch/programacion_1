// Materia: Programación I, Paralelo 3
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 16/10/2024
// Número de ejercicio: 1

#include <iostream>
using namespace std;

int leerMatriz(int A[50][50], int n) 
{
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << "A[" << i+1 << "," << j+1 << "] = ";
            cin >> A[i][j];
        }
    }
    return 0; 
}


int mostrarMatriz(int A[50][50], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}


int intercambiarFilas(int A[50][50], int n) 
{
    for (int j = 0; j < n; j++) 
    {
        int aux = A[0][j];
        A[0][j] = A[n-1][j];
        A[n-1][j] = aux;
    }
    return 0;
}


int main() 
{
    int n;
    int A[50][50];

    cout << "Ingrese el tamaño de la matriz (n): ";
    cin >> n;

    leerMatriz(A, n);

    cout << "\nMatriz original:\n";
    mostrarMatriz(A, n);

    intercambiarFilas(A, n);

    cout << "\nMatriz con la primera y última fila intercambiadas:\n";
    mostrarMatriz(A, n);

    return 0; 
}