// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 04/09/2025
// Número de ejercicio: 23

#include <iostream>
using namespace std;

int main() 
{
    int numero,c,b;
    cout << "Ingresar un numero"<< endl;
    cin >> numero;
    c = 0;

    while (numero > 0)
    {
        b = numero % 10 ;
        c = ((c*10)+b);
        numero= numero/10;
    }

    cout << c << endl;

    return 0;


}