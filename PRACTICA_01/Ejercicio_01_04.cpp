// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 24/08/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

int main()
{
    float radio, pi;
    pi= 3.1415;

    cout << "Ingresar el radio de la esfera" << endl;
    cin >> radio;

    cout << "El area de la esfera es:" << ((4*(radio*radio*radio)*pi)/3) << endl;
    
    return 0;

}