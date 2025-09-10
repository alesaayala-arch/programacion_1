// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 10/09/2025
// Número de ejercicio: 2

#include <iostream>   
#include <cstdlib>    
#include <ctime>      

using namespace std;

int main()
{
    int n;
    float cara, cruz;
    cara=0;
    cruz=0;

    cout <<"----El valor de cara es 1----" << endl;
    cout <<"----El valor de cruz es 2----" << endl;
    cout <<"Ingresar la cantidad de veces que se lanzara la moneda"<< endl;

    cin >> n;
    srand(time(0));

    for (int i =0; i<n ; i++)
    {
        int num = (rand()% 2)+1;
        cout << num << endl;
        if (num==2)
        {
            cruz += 1;
        }
        else
        {
            cara += 1;
        }
    }

    cout << "Porcentajes de caras:" << ((cara/n)*100) << "%"<< endl;
    cout << "Porcentajes de cruz:" << ((cruz/n)*100) << "%"<< endl;

    return 0;

}