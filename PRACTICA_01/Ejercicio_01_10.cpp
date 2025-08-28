// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 28/08/2025
// Número de ejercicio: 10

#include <iostream>

using namespace std;

int main()
{
    int nota;
    cout << "Ingresar la nota: " << endl;
    cin >> nota;

    if (nota >= 51)
    {
        if (nota < 60)
            cout << "Calificacion: C" << endl;
        else if (nota < 70)
            cout << "Calificacion: C+" << endl;
        else if (nota < 80)
            cout << "Calificacion: B" << endl;
        else if (nota < 90)
            cout << "Calificacion: B+" << endl;
        else if (nota < 95)
            cout << "Calificacion: A" << endl;
        else if (nota == 100)
            cout << "Calificacion: A+" << endl;
    }
    else
    {
        cout << "Reprobado" << endl;
    }

    return 0; 



}