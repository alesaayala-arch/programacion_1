// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 2

#include <iostream>
#include <string.h>

using namespace std;

struct Atleta 
{
    char nombre[40];
    char pais[40];
    int edad;
    int mejor_tiempo;
};

int main() 
{

    int N;
    cout << "Ingrese la cantidad de atletas: ";
    cin >> N;
    cin.ignore();

    Atleta atletas[100];
    Atleta mejor;

    mejor.mejor_tiempo = 999999;

    for(int i = 0; i < N; i++){
        cout << "\nATLETA " << i+1 << endl;
        cout << "Nombre: ";
        cin.getline(atletas[i].nombre, 40);
        cout << "Pais: ";
        cin.getline(atletas[i].pais, 40);
        cout << "Edad: ";
        cin >> atletas[i].edad;
        cout << "Mejor tiempo (segundos): ";
        cin >> atletas[i].mejor_tiempo;
        cin.ignore();

        if(atletas[i].mejor_tiempo < mejor.mejor_tiempo)
        {
            mejor = atletas[i];
        }
    }

    cout << "\nATLETA CON MEJOR TIEMPO\n";
    cout << "Nombre: " << mejor.nombre << endl;
    cout << "Pais: " << mejor.pais << endl;

    return 0;
}
