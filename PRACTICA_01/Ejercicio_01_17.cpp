// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 03/09/2025
// Número de ejercicio: 17

#include <iostream>
using namespace std;

int main() 
{
    int numero1, numero2, divisor1, divisor2, sumatorio1, sumatorio2;
    cout << "Ingresar dos numeros"<< endl;
    cin >> numero1 >> numero2;
    sumatorio1= 0;
    sumatorio2= 0;
    divisor1= numero1 - 1;
    divisor2=numero2 - 1 ;

    while (divisor1 > 0)
    {
        if (numero1 % divisor1 == 0)
        {
            sumatorio1 += divisor1;
        }

        divisor1 -= 1; 
    }

    while (divisor2 > 0)
    {
        if (numero2 % divisor2 == 0)
        {
            sumatorio2 += divisor2;
        }

        divisor2 -= 1; 
    }

    if ((sumatorio1 == numero2) && (sumatorio2 == numero1)) 
    {
     cout << numero1 << " " << "y" << " " << numero2 <<" " << "Son numeros amigos"<< endl;
    }

    else  
    {
     cout << numero1 << " " << "y" << " " << numero2 <<" " << "No son numeros amigos"<< endl;
    }

    return 0;

}