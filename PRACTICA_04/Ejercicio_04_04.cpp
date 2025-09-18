// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 18/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

void convertirtemperaturas (float &temperatura3)
{
    while (temperatura3 < -273.15 || temperatura3 > 100)
    {
        cout << "Ingresar otro valor"<<endl;
        cin >>temperatura3;
    }

    char letra;

    cout <<"Ingresa el simbolo de la medida: " << endl;
    cin >> letra;

    while (letra != 'C' && letra != 'c')
    {
        cout <<"Ingrese el simbolo de Celsius: " << endl;
        cin >> letra;
    }

     cout <<"La temperatura en Fahrenheit es: "<< (temperatura3*1.8)+32 << endl;
}

void ordenartemperaturas (float &temperatura1 ,float &temperatura2 )
{
    while (temperatura1 < -459.67 || temperatura1 > 373.15)
    {
        cout << "Ingresar otro valor que sea valido para la temperatura"<<endl;
        cin >>temperatura1;
    }

    while (temperatura2 < -459.67 || temperatura2 > 373.15)
    {
        cout << "Ingresar otro valor que sea valido para la temperatura"<<endl;
        cin >>temperatura2;
    }

    if (temperatura1 < temperatura2)
    {
       cout << "La menor temperatura:"<< temperatura1 <<endl;
       cout << "La mayor temperatura: "<< temperatura2 <<endl; 
    }
    else
    {
       cout << "La menor temperatura:"<< temperatura2 <<endl;
       cout << "La mayor temperatura: "<< temperatura1 <<endl; 
    }

}


int main ()

{
    float temperatura1, temperatura2, temperatura3;

    cout << "Ingrese un valor de temperatura" << endl;
    cin >> temperatura1;
    cout << "Ingrese un valor de temperatura" << endl;
    cin >> temperatura2;

    ordenartemperaturas (temperatura1 , temperatura2);

    cout << "-----Para la siguiente conversion se necesitan dos temperaturas------" << endl;

    cout << "Ingrese un valor de temperatura" << endl;
    cin >> temperatura3;

    convertirtemperaturas (temperatura3);

    return 0;

}