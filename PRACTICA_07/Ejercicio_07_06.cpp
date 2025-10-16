// Materia: Programación I, Paralelo 3
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 16/10/2024
// Número de ejercicio: 6

#include <iostream>
using namespace std;

const int MAX = 50;


int leerMatriz(int A[MAX][MAX], int n, int m);
int mostrarMatriz(int A[MAX][MAX], int filas, int columnas);
int trasponer(int A[MAX][MAX], int B[MAX][MAX], int n, int m);

int main() 
{
    int N, M;
    int A[MAX][MAX], B[MAX][MAX];

    cout << "Ingrese N (filas) y M (columnas) de la matriz A: ";
    cin >> N >> M;

    if (N <= 0 || M <= 0 || N > MAX || M > MAX) 
    {
        cout << "Dimensiones invalidas." << endl;
        return 0;
    }

    cout << "Ingrese los elementos de A (" << N << "x" << M << "):" << endl;
    leerMatriz(A, N, M);

    cout << "\nMatriz A:\n";
    mostrarMatriz(A, N, M);

    trasponer(A, B, N, M);

    cout << "\nTraspuesta B (tamaño " << M << "x" << N << "):\n";
    mostrarMatriz(B, M, N);

    return 0;
}

int leerMatriz(int A[MAX][MAX], int n, int m) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> A[i][j];
        }
    }
    return 0;
}


int mostrarMatriz(int A[MAX][MAX], int filas, int columnas) 
{
    for (int i = 0; i < filas; i++) 
    {
        for (int j = 0; j < columnas; j++) 
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}


int trasponer(int A[MAX][MAX], int B[MAX][MAX], int n, int m) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            B[j][i] = A[i][j];
        }
    }
    return 0;
}
