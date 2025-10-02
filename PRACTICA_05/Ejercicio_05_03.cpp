// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 02/10/2025
// Número de ejercicio: 3
// Problema planteado:

#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;


void ingresarCalificaciones(vector<int> &calificaciones, int N) 
{
    cout << "Ingrese " << N << " calificaciones:" << endl;
    for (int i = 0; i < N; i++) 
    {
        cout << "Calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
    }
}


int calcularSuma(const vector<int> &calificaciones) 
{
    int suma = 0;
    for (int val : calificaciones) 
    {
        suma += val;
    }
    return suma;
}


double calcularPromedio(int suma, int N) 
{
    return (double)suma / N;
}


vector<double> calcularDesviaciones(const vector<int> &calificaciones, double promedio) 
{
    vector<double> desv(calificaciones.size());
    for (size_t i = 0; i < calificaciones.size(); i++) 
    {
        desv[i] = calificaciones[i] - promedio;
    }
    return desv;
}


double calcularVarianza(const vector<double> &desviaciones, int N) 
{
    double sumaCuadrados = 0.0;
    for (double d : desviaciones) 
    {
        sumaCuadrados += pow(d, 2);
    }
    return sumaCuadrados / N;
}

int main() 
{
    int N;
    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> N;

    vector<int> calificaciones(N);
    ingresarCalificaciones(calificaciones, N);

    int suma = calcularSuma(calificaciones);
    double promedio = calcularPromedio(suma, N);
    vector<double> desviacion = calcularDesviaciones(calificaciones, promedio);
    double varianza = calcularVarianza(desviacion, N);

    cout << "\nResultados:" << endl;
    cout << "Suma total = " << suma << endl;
    cout << "Promedio = " << promedio << endl;

    cout << "\nCalificaciones y desviaciones:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Calificacion " << i + 1 << ": " << calificaciones[i]
             << " -> Desviacion: " << desviacion[i] << endl;
    }

    cout << "\nVarianza = " << varianza << endl;

    return 0;
}
