// Materia: Programación I, Paralelo 4
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 22/10/2025
// Número de ejercicio: 6

#include <iostream>
#include <vector>
using namespace std;

int funcion ( int a , int b,int vec1[], int vec2[] )
{
    if (a==0 && b==0)
    {
        return 0;
    }

    if (vec1[a-1]!= vec2[b-1])
    {
        return 1;
    }

    else
    {
        return funcion(a-1,b-1,vec1,vec2);
    }
}

int main ()
{
    int a,b;
    
    cout << "Ingresar la cantidad del primer vector" << endl;
    cin >> a;
    cout << "Ingresar la cantidad del segundo vector" << endl;
    cin >> b;
    while (a!= b)
    {
        cout << "Ingrese la misma cantidad que b" << endl;
        cin >> a;
        cout << "Ingresar la misma cantidad que a" << endl;
        cin >> b;
    }
    
    int vec1[a];
    int vec2[b]; 

    cout << "-----------------Ingresar los elementos del primer vector-----------------" << endl;
    for (int i=0; i<a;i++)
    {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vec1[i];
    }

    cout << "-----------------Ingresar los elementos del segundo vector-----------------" << endl;
    for (int i=0; i<b;i++)
    {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vec2[i];
    }

    int comparacion = funcion (a,b,vec1,vec2);

    if (comparacion == 1)
    {
        cout << "No son vectores iguales" << endl;
    }
    else
    {
        cout << "Son vectores iguales" << endl;
    }

}