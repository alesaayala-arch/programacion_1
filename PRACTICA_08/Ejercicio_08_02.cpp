// Materia: Programación I, Paralelo 4
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 21/10/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

int numero (int n, int a)
{
    int multiplicacion=1;

    if(n == 0)
    {
        return 1;
    }
    
    else
    {
        multiplicacion = a * numero (n-1, a);
        return multiplicacion;
    }
    
}

int main ()
{
    int n, a;
    cout << "Ingresar la base"<< endl;
    cin >> a;
    cout << "Ingresar el exponente"<< endl;
    cin >> n;
    int potencia = numero (n,a);
    cout << "La potencia es:" << potencia << endl;
}
