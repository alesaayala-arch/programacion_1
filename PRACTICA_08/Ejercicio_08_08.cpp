// Materia: Programación I, Paralelo 4
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 22/10/2025
// Número de ejercicio: 8

#include <iostream>
using namespace std;

int ullman (int n)
{
    if (n==1)
    {
        return 1;
    }
    
    if (n<0)
    {
        return 0;
    }
    if (n%2==0)
    {
        n=n/2;
    }
    else 
    {
        n=(n*3)+1;
    }

    cout << n << endl;
    return ullman (n);
}

int main()
{
    int n, numero;
    cout <<" Ingresar la cantidad" << endl;
    cin >> n;

    int funcion = ullman(n);
}    