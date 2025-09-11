// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 10/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

void parImpar(int n) 

{
    if (n % 2 == 0)
        cout << n << " es par." << endl;
    else
        cout << n << " es impar." << endl;
}

int main() 
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    parImpar(numero);
    return 0;
}