// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 10/09/2025
// Número de ejercicio: 1

#include <iostream>   
#include <cstdlib>    
#include <ctime>      

using namespace std;

int main()
{
    int n, frecuencia;
    frecuencia=0;
    cout << "Ingresar las veces que se tira el dado:" << endl;
    cin >> n;

    srand(time(0));

    for (int i =0; i<n; ++i)
    {
        int num = (rand() % 6) + 1;
        cout << num << " ";
        if (num % 2 == 0)
        {
            frecuencia += 1;
        }
    }

    cout << "Frecuencia de caras pares:" <<" "<<frecuencia << endl;

    return 0;
}