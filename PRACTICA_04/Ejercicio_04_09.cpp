// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 18/09/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

void calcularSueldo(int antiguedad, int productosVendidos) 
{
    int sueldoBasico = 500 + 50 * antiguedad; 
    float comision = productosVendidos * 10 * 0.10; 
    float sueldoTotal = sueldoBasico + comision;

    cout << "Sueldo basico: " << sueldoBasico << endl;
    cout << "Comision: " << comision << endl;
    cout << "Sueldo total: " << sueldoTotal << endl;
}

int main() 
{
    int n;
    cout << "Ingrese el numero de vendedoras: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        int antiguedad, productos;
        cout << "Vendedora " << i << endl;
        cout << "Ingrese antiguedad (años): ";
        cin >> antiguedad;
        cout << "Ingrese cantidad de productos vendidos: ";
        cin >> productos;

        calcularSueldo(antiguedad, productos);
        cout << "-------------------" << endl;
    }

    return 0;
}