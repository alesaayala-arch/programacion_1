// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 9
// Problema planteado:

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string invertirPalabras(const string& oracion) 
{
    vector<string> palabras;
    string palabra = "";

    
    for (int i = 0; i < oracion.length(); i++) 
    {
        if (oracion[i] != ' ') 
        {
            palabra += oracion[i];
        } 
        else 
        {
            if (palabra != "") 
            {
                palabras.push_back(palabra);
                palabra = "";
            }
        }
    }
    
    if (palabra != "") 
    {
        palabras.push_back(palabra);
    }

    
    string resultado = "";
    for (int i = palabras.size() - 1; i >= 0; i--) 
    {
        resultado += palabras[i];
        if (i != 0) resultado += " "; 
    }

    return resultado;
}

int main() 
{
    string oracion;
    cout << "Ingrese una oración: ";
    getline(cin, oracion); 

    string invertida = invertirPalabras(oracion);
    cout << "Oración invertida: " << invertida << endl;

    return 0;
}