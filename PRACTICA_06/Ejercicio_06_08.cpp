// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 8
// Problema planteado:

#include <iostream>
#include <string>

using namespace std;


bool validarCorreo(const string& correo) 
{
    int contadorArroba = 0;
    bool puntoDespues = false;

    for (int i = 0; i < correo.length(); i++) 
    {
        if (correo[i] == '@') 
        {
            contadorArroba++;

            for (int j = i + 1; j < correo.length(); j++) 
            {
                if (correo[j] == '.') 
                {
                    puntoDespues = true;
                }
            }
        }
    }

    if (contadorArroba == 1 && puntoDespues) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

int main() 
{
    string correo;
    cout << "Ingrese un correo electrónico: ";
    cin >> correo;

    if (validarCorreo(correo)) 
    {
        cout << "Correo electrónico válido" << endl;
    } 
    else 
    {
        cout << "Correo electrónico inválido" << endl;
    }

    return 0;
}
