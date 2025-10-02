// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 02/10/2025
// Número de ejercicio: 4
// Problema planteado:

#include <iostream>
#include <vector>
using namespace std;


void leerVector(vector<int> &vec, int N, const string &nombre) 
{
    cout << "Ingrese los elementos del vector " << nombre << ":" << endl;
    for (int i = 0; i < N; i++) 
    {
        cout << nombre << "[" << i << "]: ";
        cin >> vec[i];
    }
}


vector<int> multiplicarVectores(const vector<int> &A, const vector<int> &B, int N) 
{
    vector<int> C(N);
    for (int i = 0; i < N; i++) 
    {
        C[i] = A[i] * B[i];
    }
    return C;
}


void mostrarVector(const vector<int> &vec, const string &nombre) 
{
    cout << nombre << ": ";
    for (int val : vec) 
    {
        cout << val << " ";
    }
    cout << endl;
}

int main() 
{
    int N;
    cout << "Ingrese la dimension de los vectores: ";
    cin >> N;

    vector<int> A(N), B(N);

    leerVector(A, N, "A"); 
    leerVector(B, N, "B"); 

    vector<int> C = multiplicarVectores(A, B, N); 

    
    cout << "\nResultados:" << endl;
    mostrarVector(A, "Vector A");
    mostrarVector(B, "Vector B");
    mostrarVector(C, "Vector C (A*B)");

    return 0;
}