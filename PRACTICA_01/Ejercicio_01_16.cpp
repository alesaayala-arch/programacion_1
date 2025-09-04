// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 03/09/2025
// Número de ejercicio: 16

#include <iostream>
using namespace std;

int main() 
{
    int numero, contador, divisor;
    cout << "Ingresar un numero"<< endl;
    cin >> numero;
    contador = 0;
    divisor = numero;
    
    while (divisor > 0)
    {
        if (numero % divisor == 0)
        {
            contador += 1;
        }

        divisor -= 1; 
    }

    if (contador > 2)
    {
      cout << numero << "  "<<"No es un numero primo"<< endl;  
    }

    else
    {
      cout << numero <<"   "<<"Es un numero primo"<< endl;  
    }

    return 0;

}