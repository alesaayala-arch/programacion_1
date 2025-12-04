// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 8

#include <iostream>
#include <string.h>

using namespace std;

struct Atleta 
{
    char nombre[50];
    char departamento[50];
    char deporte[30];
    int medallas;
};

int main()
{
    int N;
    cout << "Ingrese la cantidad de atletas: ";
    cin >> N;
    cin.ignore();

    Atleta atletas[100];
    char departamentos[10][50]; // Para almacenar departamentos distintos
    int dep_count = 0;

    for(int i=0; i<N; i++)
    {
        cout << "\nATLETA " << i+1 << endl;
        cout << "Nombre: ";
        cin.getline(atletas[i].nombre, 50);
        cout << "Departamento: ";
        cin.getline(atletas[i].departamento, 50);
        cout << "Deporte: ";
        cin.getline(atletas[i].deporte, 30);
        cout << "Cantidad de medallas: ";
        cin >> atletas[i].medallas;
        cin.ignore();

        bool existe = false;
        for(int j=0; j<dep_count; j++)
        {
            if(strcmp(departamentos[j], atletas[i].departamento) == 0)
            {
                existe = true;
                break;
            }
        }
        if(!existe)
        {
            strcpy(departamentos[dep_count], atletas[i].departamento);
            dep_count++;
        }
    }

    cout << "\nMEDALLERO FINAL POR DEPARTAMENTO:\n";
    for(int i=0; i<dep_count; i++)
    {
        int suma = 0;
        for(int j=0; j<N; j++){
            if(strcmp(departamentos[i], atletas[j].departamento) == 0)
                suma += atletas[j].medallas;
        }
        cout << departamentos[i] << ": " << suma << " medallas" << endl;
    }

    return 0;
}
