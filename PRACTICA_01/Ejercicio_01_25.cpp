// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 04/09/2025
// Número de ejercicio: 25

#include <iostream>
using namespace std;

int main() 
{
    char respuesta = 's'; 

    while(respuesta == 's')  
    {
        int numero, multiplicador;
        cout << "Ingresar un numero: ";
        cin >> numero;
        multiplicador = 1;

        while (multiplicador <= 10)
        {
            cout << numero << " x " << multiplicador << " = " << (multiplicador * numero) << endl;
            multiplicador += 1;
        }

        cout << "¿Desea calcular otra tabla? (s/n): ";
        cin >> respuesta;
        cout << endl;
    }

    return 0;
}