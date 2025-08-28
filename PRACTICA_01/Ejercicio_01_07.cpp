// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 26/08/2025
// Número de ejercicio: 7

#include <iostream>

using namespace std;

int main()
{
    char letra;
    cout <<"Ingresar una letra: " << endl;
    cin >> letra;

    if ( (65 <= letra) & (letra <= 90) || (97 <= letra) & (letra <= 122))
    {
        if (letra == 65 || letra == 69 || letra == 73 || letra == 79 || letra == 85 || letra == 97 
        || letra == 101 || letra == 105 || letra == 111 || letra == 117)
        {
            cout << "La letra es una vocal" << endl;
        }
    
        else
        {
            cout << "La letra es una consonante" << endl;
        }
    }
    else 
    {
        cout << "La letra es un caracter especial" << endl;
    }


return 0;

}