// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 10/09/2025
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int numeroSecreto, intento, min, max;
    min = 0; 
    max = 50;

    srand(time(0));
    numeroSecreto = rand() % 51; 

    cout << "Estoy pensando un numero entre 0 y 50" << endl;

    for (int i = 1; i <= 5; i++) 
    {
        cout << "Intento " << i << endl;
        cout << "? ";
        cin >> intento;

        if (intento == numeroSecreto) 
        {
            cout << "Felicitaciones... Adivinaste el numero" << endl;
            return 0; 
        } 
        else 
        {
            if (intento < numeroSecreto) 
            {
                min = intento; 
            } 
            else 
            {
                max = intento; 
            }
            cout << "El numero esta entre " << min << " y " << max << endl;
        }
    }

    cout << "Lo siento, no adivinaste el numero. Era " << numeroSecreto << endl;

    return 0;
}