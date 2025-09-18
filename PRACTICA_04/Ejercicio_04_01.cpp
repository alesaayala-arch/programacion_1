// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 17/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

void intercambiarvalores (int &a, int &b)
{
    int cambio;
    cambio=a;
    a=b;
    b=cambio;
    
}

int main ()

{
    int a, b;

    cout << "Ingresar un numero" << endl;
    cin >> a;
    cout << "Ingresar un numero"<<endl;
    cin >> b;

    cout << "a=" << a <<endl;

    cout << "b=" << b <<endl;

    intercambiarvalores (a, b);

    cout << "a=" << a <<endl;

    cout << "b=" << b <<endl;

    return 0;

}