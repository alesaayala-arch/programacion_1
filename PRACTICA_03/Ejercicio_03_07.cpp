// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 11/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib> 
using namespace std;


int generarAleatorio(int min, int max) 
{
    return min + rand() % (max - min + 1);
}


void alumnos(int N) 
{
    int sumaEdad,sumaAltura;
    sumaAltura =0;
    sumaEdad =0;

    cout << "Edades y alturas de los alumnos:\n";

    for(int i = 1; i <= N; i++) 
    {
        int edad = generarAleatorio(1, 35);
        int altura = generarAleatorio(120, 200);

        sumaEdad += edad;
        sumaAltura += altura;

        cout << "Alumno " << i << ": Edad=" << edad << ", Altura=" << altura << " cm" << endl;
    }

    float edadMedia = (float)sumaEdad / N;
    float alturaMedia = (float)sumaAltura / N;

    cout << "Edad media: " << edadMedia << endl;
    cout << "Altura media: " << alturaMedia << " cm" << endl;
}

int main() 
{
    int N;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> N;

    alumnos(N);

    return 0;
}