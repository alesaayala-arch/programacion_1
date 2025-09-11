// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 11/09/2025
// Número de ejercicio: 11

#include <iostream>
using namespace std;


double retirarDinero(double saldo, double cantidad) 
{
    if (cantidad > saldo) 
    {
        cout << "Saldo insuficiente." << endl;
        return saldo;
    } 
    else if ((int)cantidad % 10 != 0) 
    {
        cout << "El monto debe ser múltiplo de 10." << endl;
        return saldo;
    } 
    else 
    {
        saldo = saldo - cantidad;
        cout << "Retiro exitoso. Nuevo saldo: " << saldo << " Bs." << endl;
        return saldo;
    }
}

int main() 
{
    double saldo = 1000;
    double cantidad;

    cout << "Ingrese la cantidad a retirar: ";
    cin >> cantidad;

    saldo = retirarDinero(saldo, cantidad);

    return 0;
}