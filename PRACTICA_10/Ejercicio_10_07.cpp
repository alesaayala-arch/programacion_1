// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala ALiaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 7

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() 
{

    ofstream archivo("calificaciones.txt");
    int n;
    cout << "Cuantos estudiantes desea ingresar? ";
    cin >> n;
    string nombre;
    double nota;
    for(int i=0;i<n;i++)
    {
        int m;
        cout << "Nombre del estudiante " << i+1 << ": ";
        cin >> nombre;
        cout << "Cuantas calificaciones tiene? ";
        cin >> m;
        archivo << nombre;
        for(int j=0;j<m;j++){
            cout << "Nota " << j+1 << ": ";
            cin >> nota;
            archivo << " " << nota;
        }
        archivo << endl;
    }
    archivo.close();


    ifstream entrada("calificaciones.txt");
    ofstream salida("promedios.txt");
    string linea;
    while(getline(entrada, linea))
    {
        stringstream ss(linea);
        ss >> nombre;
        double suma=0;
        int count=0;
        while(ss >> nota)
        {
            suma+=nota;
            count++;
        }
        double promedio = (count>0)? suma/count : 0;
        salida << nombre << " " << promedio << endl;
    }
    entrada.close();
    salida.close();
    cout << "Archivo 'promedios.txt' generado." << endl;
    return 0;
}
