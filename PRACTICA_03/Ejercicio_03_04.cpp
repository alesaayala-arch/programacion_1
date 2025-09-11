// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 11/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

float calcularIMC(float peso, float altura) 
{
    return peso / (altura * altura);
}

float verificacion2(float altura) 
{
    while (altura <= 0) 
    {
        cout << "Altura inválido. Ingrese un número positivo: ";
        cin >> altura;
    }

    return altura;
} 

float verificacion1(float peso) 
{
    while (peso <= 0) 
    {
        cout << "Peso inválido. Ingrese un número positivo: ";
        cin >> peso;
    }

    return peso;
}

int main() 
{
    float altura, peso;
    
    cout <<"Ingrese su peso"<<endl;
    cin >> peso;
    peso = verificacion1(peso); 

    cout <<"Ingrese su altura"<<endl;
    cin >> altura;
    altura = verificacion2(altura);  

    float imc = calcularIMC(peso, altura);
    cout << "Su IMC es: " << imc << endl;

    return 0;
}


