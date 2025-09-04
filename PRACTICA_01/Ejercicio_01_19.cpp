// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 03/09/2025
// Número de ejercicio: 19

#include <iostream>
using namespace std;

int main() 
{
    int numero, multiplicador;
    cout << "Ingresar un numero" << endl;
    cin >> numero;
    multiplicador = 1;

    while (multiplicador <= 10 )
    {
        cout << numero << "" << "x" << "" << multiplicador << "=" << (multiplicador * numero) << endl;
        multiplicador += 1;

    }

    return 0;

}