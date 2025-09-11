// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 11/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>  
using namespace std;

int generarAleatorio(int min, int max) 
{
    return min + rand() % (max - min + 1);
}

float promedioPonderado(int notas[], int pesos[], int n) 
{
    float sumaNotas = 0;
    int sumaPesos = 0;
    for (int i = 0; i < n; i++) 
    {
        sumaNotas += (notas[i] * pesos[i]);
        sumaPesos += pesos[i];
    }
    return sumaNotas / sumaPesos;
}

int main() 
{
    const int N = 4;
    int notas[N];
    int pesos[N] = {10, 20, 30, 40};

    
    for (int i = 0; i < N; i++) 
    {
        notas[i] = generarAleatorio(1, 100);
        cout << "Nota " << i+1 << ": " << notas[i] << endl;
    }

    float promedio = promedioPonderado(notas, pesos, N);
    cout << "Promedio ponderado: " << promedio << endl;

    return 0;
}