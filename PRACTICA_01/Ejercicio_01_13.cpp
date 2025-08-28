// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 28/08/2025
// Número de ejercicio: 13

#include <iostream>

using namespace std;

int main()
{
    int numero, contador;
    contador = 0;
    cout <<" Ingresar un numero:" << endl;

    cin >> numero;
    
    while (numero < 1)
    {
       cout <<" Ingresar un numero mayor a 0:" << endl;
       cin >> numero;
    }

    while (numero > 0)
    {
        contador= contador + numero;
        numero= numero-1;

    }

    cout <<"La suma de todos los digitos es:"<< contador << endl;

    return 0;
    
}