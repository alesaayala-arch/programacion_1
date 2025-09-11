// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 11/09/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

int esCapicua(int numero) 
{
    int original = numero;
    int inverso = 0;

    while (numero > 0) 
    {
        int digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero /= 10;
    }

    if (original == inverso)
        return 1; 
    else
        return 0;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (esCapicua(num) == 1)
        cout << num << " es capicua" << endl;
    else
        cout << num << " no es capicua" << endl;

    return 0;
}