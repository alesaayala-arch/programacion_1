// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 02/10/2025
// Número de ejercicio: 7
// Problema planteado:

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros(10);
    int contador = 0; 
    int valor;

    cout << "Ingrese números (negativo para terminar):" << endl;
    for (int i = 0; i < 10; i++) 
    {
        cin >> valor;
        if (valor < 0) 
        {
            break;
        }
        numeros[i] = valor;
        contador++;
    }


    cout << "Numeros ingresados: ";
    for (int i = 0; i < contador; i++) 
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}