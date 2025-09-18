// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 18/09/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

float calcularvolumen (int radio, int altura)
{
    int volumen;
    if(altura==0)
    {
        altura=10;
    }

    volumen= (radio*radio)*3.1416*altura;
    return volumen;
}

int main ()

{
    int altura, radio;

    cout << "Ingresar el valor del radio" << endl;
    cin >> radio;
    cout << "Ingresar la altura"<<endl;
    cin >> altura;
    
    float volumen= calcularvolumen  (radio, altura);

    cout << "Volumen:" << volumen <<endl;

    return 0;

}