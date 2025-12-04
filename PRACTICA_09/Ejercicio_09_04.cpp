// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 4

#include <iostream>
#include <string.h>

using namespace std;

struct Empleado 
{
    char nombre[40];
    char genero[15];
    float salario;
};

int main()
{
    int N;
    cout << "Ingrese cantidad de empleados: ";
    cin >> N;
    cin.ignore();

    Empleado lista[200];
    Empleado menor, mayor;

    menor.salario = 99999999;
    mayor.salario = -1;

    for(int i=0; i<N; i++)
    {
        cout << "\nEmpleado " << i+1 << endl;
        cout << "Nombre: ";
        cin.getline(lista[i].nombre, 40);
        cout << "Genero: ";
        cin.getline(lista[i].genero, 15);
        cout << "Salario: ";
        cin >> lista[i].salario;
        cin.ignore();

        if(lista[i].salario < menor.salario)
            menor = lista[i];

        if(lista[i].salario > mayor.salario)
            mayor = lista[i];
    }

    cout << "\nEmpleado con menor salario: " << menor.nombre << " ("<< menor.salario <<")\n";
    cout << "Empleado con mayor salario: " << mayor.nombre << " ("<< mayor.salario <<")\n";

    return 0;
}
