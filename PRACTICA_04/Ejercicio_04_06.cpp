// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 18/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int sumatoriodenumeros(int numero)
{
    int sumatorio;
    while (numero > 0)
    {
        sumatorio = numero % 10;
        numero = numero / 10;
    }
    
    return sumatorio;
}

void validarprimos(int &sumatorio)
{
    int i, contador;
    i = 2;
    contador = 0;
    while (i < sumatorio) 
    {
        if (sumatorio % i == 0) 
        {
            contador += 1;
        }

        i = i + 1;
    }

    if (contador == 0 && sumatorio > 1)
    {
        cout << sumatorio << " es primo" << endl;
    }
    else
    {
        cout << sumatorio << " no es primo" << endl;
    }
}

int main()
{
    int sumatorio, numero;

    cout << "Ingrese un numero" << endl;
    cin >> numero;

    sumatorio = sumatoriodenumeros(numero);

    validarprimos(sumatorio);

    return 0;
}