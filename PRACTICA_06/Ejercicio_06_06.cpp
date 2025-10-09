// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 6
// Problema planteado:

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void generarCalificaciones(vector<int>& calificaciones) 
{
    for (int i = 0; i < calificaciones.size(); i++) 
    {
        calificaciones[i] = rand() % 101;
    }
}


void mostrarCalificaciones(const vector<int>& calificaciones) 
{
    cout << "Calificaciones: ";
    for (int i = 0; i < calificaciones.size(); i++) 
    { 
        cout << calificaciones[i] << " ";  
    }
    cout << endl;
}

void calcularPorcentajes(const vector<int>& calificaciones) 
{
    int reprobado = 0, regular = 0, bueno = 0, excelente = 0;
    int total = calificaciones.size();

    for (int i = 0; i < calificaciones.size(); i++) 
    {   
        int cal = calificaciones[i];                    
        if (cal <= 59)
            reprobado++;
        else if (cal <= 79)
            regular++;
        else if (cal <= 89)
            bueno++;
        else
            excelente++;
    }

    cout << "\nPorcentajes por rango:" << endl;
    cout << "Reprobado (0-59): " << (reprobado * 100.0 / total) << "%" << endl;
    cout << "Regular   (60-79): " << (regular * 100.0 / total) << "%" << endl;
    cout << "Bueno     (80-89): " << (bueno * 100.0 / total) << "%" << endl;
    cout << "Excelente (90-100): " << (excelente * 100.0 / total) << "%" << endl;
}

int main() 
{
    srand(time(0)); 

    int N;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;

    vector<int> calificaciones(N);

    generarCalificaciones(calificaciones);   
    mostrarCalificaciones(calificaciones); 
    calcularPorcentajes(calificaciones);    

    return 0;
}

