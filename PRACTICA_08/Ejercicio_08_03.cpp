// Materia: Programación I, Paralelo 4
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 21/10/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

int serie (int n)
{
    if (n==0)
    {
        return 0;
    }

    if (n==1)
    {
        return 1;
    }

    else
    {
        return serie (n-1)+ serie (n-2);
    }
    
}

int main()
{
    int n;
    cout << "Ingresar un la posicion de la serie" << endl;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cout << serie (i) << endl;
    }
}