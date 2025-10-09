// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 13
// Problema planteado:

#include <iostream>
#include <string>

using namespace std;

string capitalizarPalabras(const string& texto) 
{
    string resultado = "";
    bool nuevaPalabra = true;

    for (int i = 0; i < texto.length(); i++) 
    {
        char c = texto[i];

        if (c == ' ') 
        {
            resultado += c;
            nuevaPalabra = true; 
        } 
        else 
        {
            if (nuevaPalabra) 
            {
                if (c >= 'a' && c <= 'z') 
                {
                    c = c - ('a' - 'A');
                }
                nuevaPalabra = false;
            }
            resultado += c;
        }
    }

    return resultado;
}

int main() 
{
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    string capitalizado = capitalizarPalabras(texto);
    cout << "Texto capitalizado: " << capitalizado << endl;

    return 0;
}