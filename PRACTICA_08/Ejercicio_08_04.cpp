// Materia: Programación I, Paralelo 4
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 21/10/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

int serie (int a, int b)
{
    int coeficiente=0;
    if (a%b==0)
    {
        return b;
    }
    else
    {
        coeficiente=a%b;
        a=b;
        b=coeficiente;
        return serie(a,b);
    }
    
}

int main()
{
    int a, b;
    cout << "Ingresar el primero numero"<< endl;
    cin >>a;
    cout << "Ingresar el segundo numero"<< endl;
    cin >>b;
    int euclides = serie (a,b);
    cout <<"El MCD es:" << " " << euclides << endl;
}