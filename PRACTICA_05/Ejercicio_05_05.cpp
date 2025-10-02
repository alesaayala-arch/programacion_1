// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 02/10/2025
// Número de ejercicio: 5
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


vector<int> combinarVectores(const vector<int> &A, const vector<int> &B, int N) 
{
    vector<int> C(2*N); 
    int j = 0;
    for (int i = 0; i < N; i++) 
    {
        C[j] = A[i];
        j++;
    }
  
    for (int i = 0; i < N; i++) 
    {
        C[j] = B[i];
        j++;
    }
    return C;
}


void mostrarVector(const vector<int> &vec, int N, const string &nombre) 
{
    cout << nombre << ": ";
    for (int i = 0; i < N; i++) 
    {
        cout << vec[i] << " ";
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

    vector<int> C = combinarVectores(A, B, N);

    cout << "\nResultados:" << endl;
    mostrarVector(A, N, "Vector A");
    mostrarVector(B, N, "Vector B");
    mostrarVector(C, 2*N, "Vector C (A+B)");

    return 0;
}