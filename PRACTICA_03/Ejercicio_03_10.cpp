// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 11/09/2025
// Número de ejercicio: 10

#include <iostream>
using namespace std;

double calcularTarifa(double km) 
{
    double tarifa = 10 + 2 * km; 
    if (km > 10)
    {
        tarifa = tarifa - tarifa * 0.1;
    } 
    return tarifa;
}

int main() 
{
    double km;
    cout << "Ingrese los km recorridos: ";
    cin >> km;

    cout << "El precio del viaje es: " << calcularTarifa(km) << " Bs." << endl;

    return 0;
}