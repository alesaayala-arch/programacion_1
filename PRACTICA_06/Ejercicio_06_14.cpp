// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 14
// Problema planteado:

#include <iostream>
#include <string>

using namespace std;

void contarVocales(const string& texto) 
{
    int a = 0, e = 0, i_v = 0, o = 0, u = 0; 

    for (int j = 0; j < texto.length(); j++) 
    {
        char c = texto[j];
        if (c >= 'A' && c <= 'Z') 
        {
            c = c + ('a' - 'A');
        }

        if (c == 'a') a++;
        else if (c == 'e') e++;
        else if (c == 'i') i_v++;
        else if (c == 'o') o++;
        else if (c == 'u') u++;
    }

    cout << "Cantidad de vocales:" << endl;
    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i_v << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;
}

int main() 
{
    string texto;
    cout << "Ingrese una cadena: ";
    getline(cin, texto);
    contarVocales(texto);

    return 0;
}