// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 10/09/2025
// Número de ejercicio: 3

#include <iostream>   
#include <cstdlib>    
#include <ctime>      

using namespace std;

int main()
{
    int n, factorial;
    factorial=1;

    srand(time(0));

    for (int i =0; i<1; ++i)
    {
        int num = (rand() % 10) + 1;
        cout << num << "!"<<endl;
        while (num >0)
        {
            factorial = factorial * num;
            num -= 1;
        }
    }

    cout << factorial << endl;
    return 0;
     
}