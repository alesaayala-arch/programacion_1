// Materia: Programación I, Paralelo 3
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 16/10/2024
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>   
#include <ctime>     
#include <cmath>     
using namespace std;


int generarMatriz(int M[50][50], int n, int A, int B) 
{
    srand(time(0)); 
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            M[i][j] = A + rand() % (B - A + 1);
        }
    }
    return 0;
}


int mostrarMatriz(int M[50][50], int n) 
{
    cout << "\nMatriz generada:\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}


int sumaUltimaColumna(int M[50][50], int n) 
{
    int suma = 0;
    for (int i = 0; i < n; i++) 
    {
        suma += M[i][n-1];
    }
    cout << "\nLa suma de la última columna es: " << suma << endl;
    return suma;
}


int productoUltimaFila(int M[50][50], int n) 
{
    int producto = 1;
    for (int j = 0; j < n; j++) 
    {
        producto *= M[n-1][j];
    }
    cout << "El producto de la última fila es: " << producto << endl;
    return producto;
}


int mayorValor(int M[50][50], int n) 
{
    int mayor = M[0][0];
    int fila = 0, col = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (M[i][j] > mayor) 
            {
                mayor = M[i][j];
                fila = i;
                col = j;
            }
        }
    }
    cout << "El mayor valor es: " << mayor 
         << " en la posición (" << fila+1 << ", " << col+1 << ")" << endl;
    return mayor;
}

int desviacionEstandar(int M[50][50], int n) 
{
    int total = n * n;
    double suma = 0, sumaCuadrados = 0;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            suma += M[i][j];
            sumaCuadrados += pow(M[i][j], 2);
        }
    }

    double media = suma / total;
    double varianza = (sumaCuadrados / total) - pow(media, 2);
    double desviacion = sqrt(varianza);

    cout << "La desviación estándar de todos los elementos es: " << desviacion << endl;
    return 0;
}


int main() 
{
    int n, A, B;
    int M[50][50];

    cout << "Ingrese el tamaño de la matriz (n): ";
    cin >> n;

    cout << "Ingrese el valor mínimo (A): ";
    cin >> A;
    cout << "Ingrese el valor máximo (B): ";
    cin >> B;

    generarMatriz(M, n, A, B);
    mostrarMatriz(M, n);
    sumaUltimaColumna(M, n);
    productoUltimaFila(M, n);
    mayorValor(M, n);
    desviacionEstandar(M, n);

    return 0;
}
