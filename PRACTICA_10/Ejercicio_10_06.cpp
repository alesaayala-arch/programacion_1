// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala ALiaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 6

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ofstream archivo("temperaturas.txt");
    int n;
    cout << "Cuantas ciudades desea ingresar? ";
    cin >> n;
    string ciudad;
    double temp;
    for(int i=0;i<n;i++)
    {
        cout << "Ciudad " << i+1 << ": ";
        cin >> ciudad;
        cout << "Temperatura: ";
        cin >> temp;
        archivo << ciudad << " " << temp << endl;
    }
    archivo.close();


    ifstream entrada("temperaturas.txt");
    ofstream salida("altas_temperaturas.txt");
    double N;
    cout << "Ingrese la temperatura minima para filtrar: ";
    cin >> N;

    while(entrada >> ciudad >> temp)
    {
        if(temp > N)
        {
            salida << ciudad << " " << temp << endl;
        }
    }
    entrada.close();
    salida.close();
    cout << "Archivo 'altas_temperaturas.txt' generado." << endl;
    return 0;
}
