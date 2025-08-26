// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 24/08/2025
// Número de ejercicio: 5

#include <iostream>

using namespace std;

int main()
{ 
    float temperatura;
    char letra;
    
    cout <<"Ingresar la temperatura en Celsius: " << endl;
    cin >> temperatura;

    while (temperatura >= 273.15)
    {  
        cout <<"Ingrese un valor de temperatura menor a 273.15: " << endl;
        cin >> temperatura;
    }

    cout <<"Ingresa el simbolo de la medida: " << endl;
    cin >> letra;

    while (letra != 'C')
    {
        cout <<"Ingrese el simbolo de Celsius: " << endl;
        cin >> letra;
    }

    cout <<"La temperatura en Kelvin es: " << temperatura + 273.15 << endl;

    return 0;
}
    