// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 02/10/2025
// Número de ejercicio: 6
// Problema planteado:

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> vector1(5), vector2(5), vector3(5);

    cout << "Ingrese 5 valores para vector1:" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cin >> vector1[i];
    }

    cout << "Ingrese 5 valores para vector2:" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cin >> vector2[i];
    }

    for (int i = 0; i < 5; i++) 
    {
        vector3[i] = vector1[i] + vector2[i];
    }

    cout << "Vector3 = ";
    for (int i = 0; i < 5; i++) 
    {
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}