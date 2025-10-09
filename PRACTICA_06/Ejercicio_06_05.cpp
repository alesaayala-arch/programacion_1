// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 5
// Problema planteado:

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


void mostrarClientesComunes(const vector<string>& empresa1, const vector<string>& empresa2) 
{
    cout << "Clientes en común:" << endl;
    bool hayComunes = false;

    for (int i = 0; i < empresa1.size(); i++) 
    {
        for (int j = 0; j < empresa2.size(); j++) 
        {
            if (empresa1[i] == empresa2[j]) 
            {  
                cout << empresa1[i] << endl;
                hayComunes = true;
            }
        }
    }

    if (hayComunes== false) 
    {
        cout << "No hay clientes en común." << endl;
    }
}

int main() 
{
    int n1, n2;
    cout << "Cantidad de clientes de la empresa 1: ";
    cin >> n1;
    cout << "Cantidad de clientes de la empresa 2: ";
    cin >> n2;

    vector<string> empresa1(n1);
    vector<string> empresa2(n2);

    cout << "\nIngrese los nombres de los clientes de la empresa 1:" << endl;
    for (int i = 0; i < n1; i++) 
    {
        cin >> empresa1[i];
    }

    cout << "\nIngrese los nombres de los clientes de la empresa 2:" << endl;
    for (int i = 0; i < n2; i++) 
    {
        cin >> empresa2[i];
    }

    mostrarClientesComunes(empresa1, empresa2);

    return 0;
}