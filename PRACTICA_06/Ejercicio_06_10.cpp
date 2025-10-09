// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 10
// Problema planteado:

#include <iostream>
#include <string>

using namespace std;

string eliminarDigitos(const string& cadena) 
{
    string resultado = "";
    for (int i = 0; i < cadena.length(); i++) 
    {
        if (cadena[i] < '0' || cadena[i] > '9') 
        {  
            resultado += cadena[i];
        }
    }
    
    return resultado;
}

int main() 
{
    string texto;
    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    string sinDigitos = eliminarDigitos(texto);
    cout << "Cadena sin dígitos: " << sinDigitos << endl;

    return 0;
}