// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala ALiaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 4

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ofstream archivo("datos.txt");
    int n;
    cout << "Cuantas lineas desea ingresar en 'datos.txt'? ";
    cin >> n;
    cin.ignore();
    string linea;
    for(int i = 0; i < n; i++) 
    {
        cout << "Linea " << i+1 << ": ";
        getline(cin, linea);
        archivo << linea << endl;
    }
    archivo.close();

    ifstream entrada("datos.txt");
    string buscar;
    cout << "Ingrese la palabra o frase a buscar: ";
    getline(cin, buscar);

    int contador = 0;
    while (getline(entrada, linea)) 
    {
        size_t pos = linea.find(buscar);
        while (pos != string::npos) 
        {
            contador++;
            pos = linea.find(buscar, pos + buscar.length());
        }
    }
    entrada.close();
    cout << "La palabra/frase '" << buscar << "' aparece " << contador << " veces." << endl;

    return 0;
}
