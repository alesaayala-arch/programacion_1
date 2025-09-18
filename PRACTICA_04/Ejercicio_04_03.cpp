// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 18/09/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

void modificarvalores (int a, int &b)
{
    a=a*2;
    b=b+10;

}

int main ()

{
    int a, b;

    cout << "Ingresar un numero" << endl;
    cin >> a;
    cout << "Ingresar un numero"<<endl;
    cin >> b;

    modificarvalores (a, b);

    cout << "a=" << a <<endl;
    cout << "b=" << b <<endl;

    return 0;

}