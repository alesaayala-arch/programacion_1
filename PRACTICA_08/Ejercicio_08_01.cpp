// Materia: Programación I, Paralelo 4
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 21/10/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

int numero (int n)
{
    int suma=0;
    if (n<0)
    {
        n= n*-1;
    }
    
    if(n==0)
    {
        return 0;
    }
    
    else
    {
        suma += n%10;
        suma += numero (n/10);
        return (suma);
    }
    
}

int main ()
{
    int n;
    cout << "Ingresar un numero"<< endl;
    cin >> n;
    int valornumero = numero (n);
    cout << "La suma de los digitos es:" << valornumero << endl;
}
