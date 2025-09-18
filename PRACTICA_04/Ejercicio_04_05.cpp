// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 18/09/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

void calcularsalario1 (int &horas, int &tarifa)
{
    cout <<"El salario del trabajador es: "<< (horas * tarifa) << endl;
}

void calcularsalario2 (int &horas, int &tarifa, float &bonificacion)
{
    int resultado;
    resultado= horas * tarifa * (bonificacion/100);
    cout <<"La bonificacion es de: "<< resultado << endl; 
    cout <<"El salario total es: "<< (8 * tarifa)+(horas*tarifa)+ resultado << endl;  
   
}



int main ()

{
    int horas, tarifa;
    float bonificacion;

    cout << "Ingrese cuantas horas trabaja(es por hora)" << endl;
    cin >> horas;
    cout << "Ingrese el costo de tarifa po hora" << endl;
    cin >> tarifa;
    cout << "Ingrese la bonificacion si se trabajan mas horas" << endl;
    cin >> bonificacion;

    if(horas <= 8)
    {
        calcularsalario1 (horas, tarifa);
    }
    else
    {
        horas=horas-8;
        calcularsalario2 (horas, tarifa, bonificacion);
    }

    return 0;

}