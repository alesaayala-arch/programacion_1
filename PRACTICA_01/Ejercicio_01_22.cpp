// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 04/09/2025
// Número de ejercicio: 22

#include <iostream>
using namespace std;

int main() 
{
    int numero1, numero2;
    cout << "Ingresar dos numeros" << endl;
    cin >> numero1 >> numero2;

    if (numero1 > numero2)
    {
        if (numero1 % numero2 == 0)
        {
             cout <<numero1 <<" " << "es multiplo de"<< " " << numero2 << endl;
        }
        else
        {
             cout <<numero1 <<" "<<"no es multiplo de"<< " " << numero2 << endl;
        }
    }

    else
    {
        if (numero2 % numero1 == 0)
        {
             cout <<numero2 <<" " <<"es multiplo de"<< " " << numero1 << endl;
        }
        else
        {
             cout <<numero2 <<" " <<"no es multiplo de"<< "" << numero1 << endl;
        }

    }


    return 0;
}