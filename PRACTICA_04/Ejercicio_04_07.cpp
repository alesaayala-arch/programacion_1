// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 18/09/2025
// Número de ejercicio: 7

#include <iostream>
using namespace std;


int calcularMCD(int m, int n) 
{
    while (n != 0) 
    {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}


int calcularMCM(int m, int n) 
{
    int mcd = calcularMCD(m, n);
    return (m * n) / mcd;
}

int main() 
{
    int m, n;
    cout << "Ingrese dos numeros positivos: ";
    cin >> m >> n;

    int mcd = calcularMCD(m, n);
    int mcm = calcularMCM(m, n);

    cout << "MCD: " << mcd << endl;
    cout << "MCM: " << mcm << endl;

    return 0;
}