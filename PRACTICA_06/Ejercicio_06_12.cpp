// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 12
// Problema planteado:

#include <iostream>
#include <string>

using namespace std;

bool esPalindromo(const string& texto) 
{
    string limpio = "";

    for (int i = 0; i < texto.length(); i++) 
    {
        char c = texto[i];
        if (c >= 'A' && c <= 'Z') 
        {
            c = c + ('a' - 'A');
        }

        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) 
        {
            limpio += c;
        }
    }


    int n = limpio.length();
    for (int i = 0; i < n / 2; i++) 
    {
        if (limpio[i] != limpio[n - 1 - i]) 
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    if (esPalindromo(texto)) 
    {
        cout << "Es palíndromo" << endl;
    } 
    else 
    {
        cout << "No es palíndromo" << endl;
    }

    return 0;
}
