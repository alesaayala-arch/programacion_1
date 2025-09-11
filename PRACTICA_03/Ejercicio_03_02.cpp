// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 11/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;


float verificacion(float temperatura) 
{
    while ((temperatura >= -273.15) && (temperatura > 100))
    {  
        cout <<"Ingrese un valor de temperatura en C: " << endl;
        cin >> temperatura;
    }

    return temperatura;
}

char verificacion2(char letra) 
{
    while (letra != 'C')
    {
        cout <<"Ingrese el simbolo de Celsius (C): " << endl;
        cin >> letra;
    }

    return letra;
}

int main() 
{
    float temperatura;
    char letra;

    cout << "Ingrese un numero: " << endl;
    cin >> temperatura;
    verificacion(temperatura);

    cout << "Ingrese el signo de la temperatura: " << endl;
    cin >> letra;
    verificacion2(letra);

    cout <<"La temperatura en Fahrenheit. es: " << ((temperatura*9)/5)+32 << endl;
    return 0;
}


