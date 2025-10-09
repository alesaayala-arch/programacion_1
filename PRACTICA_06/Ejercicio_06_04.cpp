// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 4
// Problema planteado:

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
void rotarVector(vector<int>& v, int k) 
{
    int n = v.size();
    k = k % n;
    if (k == 0) 
    {
        vector<int> temp(n);
        for (int i = 0; i < n; i++) 
        {
            temp[(i + k) % n] = v[i];
        }

        for (int i = 0; i < n; i++) 
        {
            v[i] = temp[i];
        }

    }
    
}


void mostrarVector(const vector<int>& v) 
{
    for (int i = 0; i < v.size(); i++) 
    {   
        cout << v[i] << " ";              
        cout << endl;   
    }                       
}

int main() 
{
    int N, k;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> N;

    vector<int> numeros(N);
    cout << "Ingrese los " << N << " numeros:" << endl;
    for (int i = 0; i < N; i++) 
    {
        cin >> numeros[i];
    }

    cout << "Ingrese la cantidad de posiciones a rotar a la derecha: ";
    cin >> k;

    rotarVector(numeros, k);

    cout << "Vector después de la rotación: ";
    mostrarVector(numeros);

    return 0;
}