// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 26/08/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Ingresar un numero: " << endl;
    cin >> numero;
    
    if (numero == 0)
        cout << "El numero es cero" << endl;
    else if (numero < 0)
        cout << "El numero es negativo" << endl;
    else
        cout << "El numero es positivo" << endl;

    return 0;
    
}
