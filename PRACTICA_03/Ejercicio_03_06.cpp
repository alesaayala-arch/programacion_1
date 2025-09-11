// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 11/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int diasDelMes(int mes, int año) 
{
    int bisiesto;
    if (año % 4 == 0 && (año % 100 != 0 || año % 400 == 0))
        bisiesto = 1;
    else
        bisiesto = 0;

    if (mes == 2) 
    {
        if (bisiesto == 1) return 29;
        else return 28;
    } 
    
    else if (mes==4 || mes==6 || mes==9 || mes==11) 
    
    {
        return 30;
    } 
    else 
    {
        return 31;
    }
}

int main() 
{
    int mes, año;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> año;

    cout << "El mes tiene " << diasDelMes(mes, año) << " dias." << endl;
    return 0;
}