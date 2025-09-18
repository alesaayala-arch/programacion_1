// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 18/09/2025
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;


int precioAleatorio() 
{
    return 20 + rand() % 31; 
}


float calcularTotalVentas(int n) 
{
    float suma = 0;
    for (int i = 0; i < n; i++) 
    {
        int precio = precioAleatorio();
        float precioConIVA = precio + precio * 0.13; 
        suma += precioConIVA;
    }
    
    if (suma > 2500)
    {
        suma = suma - suma * 0.05;
    } 

    return suma;
}

int main() 
{
    srand(time(0)); 
    int n;
    cout << "Ingrese el numero de productos vendidos: ";
    cin >> n;

    float total = calcularTotalVentas(n);
    float pagoIVA = total * 0.13;

    cout << "Suma total de ventas: " << total << endl;
    cout << "Pago del IVA al SIN: " << pagoIVA << endl;

    return 0;
}