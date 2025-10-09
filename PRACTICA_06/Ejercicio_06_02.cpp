// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 2
// Problema planteado:

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

#include <iostream>
#include <string>
using namespace std;

int N = 6; 

void buscarMineral(const string minerales[], const double produccion[], string nombre);
void ordenarMinerales(const string minerales[], const double produccion[]);
void mostrarMinerales(const string minerales[], const double produccion[]);

int main() 
{
    
    const string minerales[N] = {"SN", "SB", "AU", "PT", "AG", "CU"};
    const double produccion[N] = {998000, 876500, 786670, 636143, 135567, 109412};

    string nombre;
    cout << "Ingrese el nombre del mineral a buscar: ";
    cin >> nombre;

    buscarMineral(minerales, produccion, nombre);

    cout << "\nMinerales ordenados por produccion (mayor a menor):\n";
    ordenarMinerales(minerales, produccion);

    return 0;
}


void buscarMineral(const string minerales[], const double produccion[], string nombre) 
{
    bool encontrado = false;
    for (int i = 0; i < N; i++) 
    {
        if (minerales[i] == nombre) 
        {
            cout << "Produccion de " << nombre << ": " << produccion[i] << " t" << endl;
            encontrado = true;
        }
    }
    if (encontrado== false) 
    {
        cout << "Mineral no encontrado." << endl;
    }
}


void ordenarMinerales(const string minerales[], const double produccion[])
{
    string minAux[N];
    double prodAux[N];

    for (int i = 0; i < N; i++)
    {
        minAux[i] = minerales[i];
        prodAux[i] = produccion[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (prodAux[i] < prodAux[j])  
            {
            
                double tempProd = prodAux[i];
                prodAux[i] = prodAux[j];
                prodAux[j] = tempProd;

                
                string tempMin = minAux[i];
                minAux[i] = minAux[j];
                minAux[j] = tempMin;
            }
        }
    }

    mostrarMinerales(minAux, prodAux);
}


void mostrarMinerales(const string minerales[], const double produccion[]) 
{
    cout << "Mineral\tProduccion (t)" << endl;
    for (int i = 0; i < N; i++) 
    {
        cout << minerales[i] << "\t" << produccion[i] << endl;
    }
}
