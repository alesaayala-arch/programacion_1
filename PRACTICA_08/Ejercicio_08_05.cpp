// Materia: Programación I, Paralelo 4
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 21/10/2025
// Número de ejercicio: 5

#include <iostream>
#include <vector>
using namespace std;

int funcion (int vec[], int n)
{
    int suma =0;
    if (n==0)
    {
        return 0; 
    }
    else
    {
        suma += vec[n-1];
        suma += funcion(vec, n-1);
        return suma;
    }

}

int main ()
{
    int n;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;

    int vec[n]; 

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vec[i];
    }

    int suma= funcion (vec, n);
    cout << "La suma de elementos del vector es:" << suma << ": ";

}