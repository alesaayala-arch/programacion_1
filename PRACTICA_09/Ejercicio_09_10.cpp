// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 10

#include <iostream>

using namespace std;

struct Fraccion 
{
    int numerador;
    int denominador;
};

int MCD(int a, int b)
{
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

Fraccion ReducirFraccion(Fraccion f)
{
    Fraccion simplificada;
    int mcd = MCD(f.numerador, f.denominador);
    simplificada.numerador = f.numerador / mcd;
    simplificada.denominador = f.denominador / mcd;
    return simplificada;
}

int main() 
{
    Fraccion f, fs;

    cout << "Ingrese numerador: ";
    cin >> f.numerador;
    cout << "Ingrese denominador: ";
    cin >> f.denominador;
    
    fs = ReducirFraccion(f);

    cout << "Fraccion simplificada: " << fs.numerador << "/" << fs.denominador << endl;

    return 0;
}
