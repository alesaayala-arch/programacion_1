// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 11
// Problema planteado:

#include <iostream>
#include <string>

using namespace std;

void dividirCadena(const string& cadena, char delimitador) 
{
    string token = "";

    for (int i = 0; i < cadena.length(); i++) 
    {
        if (cadena[i] != delimitador) 
        {
            token += cadena[i];
        } 
        else 
        {
            if (token != "") 
            {
                cout << token << endl;  
                token = "";             
            }
        }
    }

    if (token != "") 
    {
        cout << token << endl;
    }
}

int main() 
{
    string texto;
    char delim;

    cout << "Ingrese la cadena: ";
    getline(cin, texto);
    cout << "Ingrese el delimitador: ";
    cin >> delim;

    dividirCadena(texto, delim);

    return 0;
}