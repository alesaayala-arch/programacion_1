// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 03/09/2025
// Número de ejercicio: 18

#include <iostream>
using namespace std;

int main() 
{
    int numero, contador,contador2, divisor;
    numero = 2;
    contador2 = 0;
    
    while (contador2 < 100)
    {
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

        if (contador == 2)
        {
            contador2 += 1;
            cout << numero << " ";
        }

        numero += 1;

    }
    
    return 0;

}