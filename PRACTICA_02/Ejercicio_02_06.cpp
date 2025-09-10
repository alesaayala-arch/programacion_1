// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 10/09/2025
// Número de ejercicio: 6

#include <iostream>   
#include <cstdlib>    
#include <ctime>      

using namespace std;

int main()
{
    int n,divisor, contador;
    cout << "Ingresar la cantidad de numeros:" << endl;
    cin >> n;
    
    srand(time(0));

    for (int i=0; i<n; ++i)
    {
        int num = (rand() % 10000) + 1;
        cout << num << endl;
        divisor = num;
        contador= 0;

        while (divisor >0)
        {
            if (num % divisor == 0)
            {
                contador += 1;
            }

            divisor -= 1;
        }

        if (contador == 2)
        {
            cout << " ";
            cout << "Es un numero primo: " << num <<endl;
        }
    }
    
    return 0;
     
}