// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 10/09/2025
// Número de ejercicio: 5

#include <iostream>   
#include <cstdlib>    
#include <ctime>      

using namespace std;

int main()
{
    int n, sumatorio,MeV, MaV;
    double promedio;
    sumatorio=0;
    MeV=10001;
    MaV=0;
    cout << "Ingresar la cantidad de numeros:" << endl;
    cin >> n;

    srand(time(0));

    for (int i=0; i<n; ++i)
    {
        int num = (rand() % 10000) + 1;
        cout << num <<endl;
        sumatorio += num;

        if (num < MeV)
        {
            MeV= num;
        }
        
        if (num > MaV)
        {
            MaV=num;
        }
    }

    promedio= (sumatorio/n);

    cout << "Numero con mayor valor:"<< MaV <<endl;
    cout << "Numero con menor Valor:"<< MeV <<endl;
    cout << "Suma de todos los numero:"<< sumatorio<< endl;
    cout << "Promedio de todos los numeros:"<< promedio << endl;
    return 0;
     
}