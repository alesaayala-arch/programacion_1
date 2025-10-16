// Materia: Programación I, Paralelo 3
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 16/10/2024
// Número de ejercicio: 5

#include <iostream>
using namespace std;


void leerMatriz(int matriz[20][20], int filas, int columnas, char nombre) 
{
    cout << "Ingrese los elementos de la matriz " << nombre << " (" << filas << "x" << columnas << "):\n";
    for (int i = 0; i < filas; i++) 
    {
        for (int j = 0; j < columnas; j++) 
        {
            cout << nombre << "[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}


void multiplicarMatrices(int A[20][20], int B[20][20], int C[20][20], int N, int M) 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            C[i][j] = 0;
            for (int k = 0; k < M; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}


void mostrarMatriz(int matriz[20][20], int filas, int columnas, string nombre) 
{
    cout << "\nMatriz " << nombre << " (" << filas << "x" << columnas << "):\n";
    for (int i = 0; i < filas; i++) 
    {
        for (int j = 0; j < columnas; j++) 
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() 
{
    int N, M;
    int A[20][20], B[20][20], C[20][20];

    cout << "Ingrese el número de filas (N) de la primera matriz: ";
    cin >> N;
    cout << "Ingrese el número de columnas (M) de la primera matriz: ";
    cin >> M;

    leerMatriz(A, N, M, 'A');
    leerMatriz(B, M, N, 'B');

    multiplicarMatrices(A, B, C, N, M);

    mostrarMatriz(A, N, M, "A");
    mostrarMatriz(B, M, N, "B");
    mostrarMatriz(C, N, N, "C = A x B");

    return 0;
}
