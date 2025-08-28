// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 28/08/2025
// Número de ejercicio: 12

#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Ingresar un numero del 1 al 5" << endl;
    cin >> numero;

    while ((numero < 1 ) || (numero > 5))
    {
        cout << "Ingresar solo un numero del 1 al 5:" << endl;
        cin >> numero;
    }

    cout << "Su numero elegido fue:" << numero << endl;

    return 0;

}