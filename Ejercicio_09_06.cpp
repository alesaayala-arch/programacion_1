// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 6

#include <iostream>
#include <string.h>

using namespace std;

struct Empleado 
{
    char nombre[50];
    int id;
    float sueldo;
    int antiguedad;
};

int contarSueldoMayor(Empleado lista[], int N, float valor)
{
    int contador = 0;
    for(int i=0; i<N; i++)
    {
        if(lista[i].sueldo > valor)
            contador++;
    }
    return contador;
}


float promedioAntiguedad(Empleado lista[], int N)
{
    int suma = 0;
    for(int i=0; i<N; i++)
    {
        suma += lista[i].antiguedad;
    }
    return (float)suma / N;
}

int main()
{
    int N;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> N;
    cin.ignore();

    Empleado lista[100];

    for(int i=0; i<N; i++)
    {
        cout << "\nEMPLEADO " << i+1 << endl;
        cout << "Nombre: ";
        cin.getline(lista[i].nombre, 50);
        cout << "ID: ";
        cin >> lista[i].id;
        cout << "Sueldo: ";
        cin >> lista[i].sueldo;
        cout << "Antiguedad (años): ";
        cin >> lista[i].antiguedad;
        cin.ignore();
    }

    float valor;
    cout << "\nIngrese valor de sueldo para contar empleados: ";
    cin >> valor;

    cout << "Cantidad de empleados con sueldo mayor a " << valor << ": "
         << contarSueldoMayor(lista, N, valor) << endl;

    cout << "Promedio de antiguedad: " << promedioAntiguedad(lista, N) << " años" << endl;

    return 0;
}
