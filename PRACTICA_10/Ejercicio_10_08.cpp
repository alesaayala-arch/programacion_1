// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala ALiaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 8

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {

    ofstream archivo("documento.txt");
    int n;
    cout << "Cuantas lineas desea ingresar? ";
    cin >> n;
    cin.ignore();
    string linea;
    for(int i=0;i<n;i++)
    {
        cout << "Linea " << i+1 << ": ";
        getline(cin, linea);
        archivo << linea << endl;
    }
    archivo.close();


    ifstream entrada("documento.txt");
    int lineas=0, palabras=0, caracteres=0;
    while(getline(entrada, linea))
    {
        lineas++;
        caracteres += linea.length() + 1;
        stringstream ss(linea);
        string palabra;
        while(ss >> palabra)
        {
            palabras++;
        }
    }
    entrada.close();
    cout << "Lineas: " << lineas << endl;
    cout << "Palabras: " << palabras << endl;
    cout << "Caracteres: " << caracteres << endl;
    return 0;
}
