// Materia: Programación I, Paralelo 4
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 22/10/2025
// Número de ejercicio: 7

#include <iostream>
using namespace std;

int sumas (int n)
{
    int a,sumador=0;
    if(n==0)
    {
        return 0;
    }
    else
    {
       cout <<" Ingresar el numero" << endl;
       cin >> a; 
       sumador += a*a;
       sumador += sumas(n-1);
       return sumador;
    }
}

int main()
{
    int n, numero;
    cout <<" Ingresar la cantidad" << endl;
    cin >> n;
    
    int sumatorio = sumas(n);

    cout << "Sumatoria" << " " << sumatorio << endl;
}
