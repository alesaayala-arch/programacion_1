// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 11/09/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

void tiempoTrabajado(int minutos) 
{
    int jornada = 8 * 60;

    if (minutos > jornada)
    {
        cout << "Trabajó de más " << minutos - jornada << " minutos." << endl;
    }
    else if (minutos < jornada)

    cout << "Debe " << jornada - minutos << " minutos a la empresa." << endl;

    else
    {
        cout << "Trabajó exactamente la jornada laboral." << endl;
    }
    
}

int main() 
{
    int minutos;
    cout << "Ingrese los minutos trabajados: ";
    cin >> minutos;

    tiempoTrabajado(minutos);

    return 0;
}