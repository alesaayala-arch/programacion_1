// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 10/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N, n1, n2, n3, totalPañales;

    cout << "Ingrese la cantidad total de infantes: ";
    cin >> N;

    srand(time(0));

    n1 = rand() % (N + 1);

    n2 = rand() % (N - n1 + 1);

    n3 = N - n1 - n2;

    totalPañales = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "Infantes de edad 1: " << n1 << endl;
    cout << "Infantes de edad 2: " << n2 << endl;
    cout << "Infantes de edad 3: " << n3 << endl;

    cout << "Consumo total de pañales por dia: " << totalPañales << endl;

    return 0;
}