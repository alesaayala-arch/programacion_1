// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 04/09/2025
// Número de ejercicio: 20

#include <iostream>
using namespace std;

int main() 
{
    int numero,contador;
    cout << "Ingresar un numero"<< endl;
    cin >> numero;
    contador = 0;

    while (numero > 0)
    {
        numero % 10;
        contador += 1;
        numero= numero/10;

    }

    cout <<"Cantidad de digitos"<<" " << contador << endl;

    return 0;

}