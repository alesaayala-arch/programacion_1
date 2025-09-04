// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 04/09/2025
// Número de ejercicio: 21

#include <iostream>
using namespace std;

int main() 
{
    int numero1, numero2, sumatorio;
    cout << "Ingresar dos numeros" << endl;
    cin >> numero1 >> numero2;

    sumatorio = 0;

    if (numero2 > 0)
    {
        while (numero2 > 0)
        {
            sumatorio += numero1;
            numero2 -= 1;
        }
    }
    else
    {
        while (numero2 < 0)
        {
            sumatorio -= numero1; 
            numero2 += 1;
        }
    }

    cout << "La multiplicacion es: " << sumatorio << endl;

    return 0;
}