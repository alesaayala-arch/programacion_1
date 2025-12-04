// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala ALiaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 2

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream archivo("texto.txt");
    if (!archivo.is_open()) 
    {
        cout << "No se encontró 'texto.txt'. Creando uno nuevo..." << endl;
        ofstream nuevo("texto.txt");
        cout << "Ingrese texto para el archivo (una línea y luego ENTER, Ctrl+Z + ENTER para finalizar):" << endl;
        string linea;
        cin.ignore(); 
        while (getline(cin, linea)) 
        {
            nuevo << linea << endl;
        }
        nuevo.close();
        archivo.open("texto.txt"); 
        if (!archivo.is_open()) 
        {
            cout << "Error al abrir el archivo recién creado." << endl;
            return 1;
        }
    }

    string linea;
    int contador = 0;
    while (getline(archivo, linea)) 
    {
        stringstream ss(linea);
        string palabra;
        while (ss >> palabra) 
        {
            contador++;
        }
    }

    archivo.close();
    cout << "Número de palabras en el archivo: " << contador << endl;
    return 0;
}

