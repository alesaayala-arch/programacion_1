// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 9

#include <iostream>

using namespace std;

struct Alumno 
{
    char nombre[50];
    float T1, T2, T3, T4, EF;
    float NF;
};

int main()
{
    int N;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> N;
    cin.ignore();

    Alumno alumnos[100];
    float sumaNF = 0, minNF = 999, maxNF = -1;

    for(int i=0; i<N; i++)
    {
        cout << "\nALUMNO " << i+1 << endl;
        cout << "Nombre: ";
        cin.getline(alumnos[i].nombre, 50);
        cout << "Nota T1: "; cin >> alumnos[i].T1;
        cout << "Nota T2: "; cin >> alumnos[i].T2;
        cout << "Nota T3: "; cin >> alumnos[i].T3;
        cout << "Nota T4: "; cin >> alumnos[i].T4;
        cout << "Nota EF: "; cin >> alumnos[i].EF;
        cin.ignore();

        float NP = (alumnos[i].T1 + alumnos[i].T2 + alumnos[i].T3 + alumnos[i].T4) / 4;
        alumnos[i].NF = 0.7 * NP + 0.3 * alumnos[i].EF;

        sumaNF += alumnos[i].NF;
        if(alumnos[i].NF < minNF) minNF = alumnos[i].NF;
        if(alumnos[i].NF > maxNF) maxNF = alumnos[i].NF;
    }

    float promedio = sumaNF / N;

    cout << "\nNotas finales:\n";
    for(int i=0; i<N; i++)
    {
        cout << alumnos[i].nombre << ": " << alumnos[i].NF << endl;
    }

    cout << "\nPromedio: " << promedio << endl;
    cout << "Minima: " << minNF << endl;
    cout << "Maxima: " << maxNF << endl;

    return 0;
}
