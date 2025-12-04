// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala ALiaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 9

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char cifrar(char c, int d)
{
    if(c>='A' && c<='Z') return 'A' + (c-'A'+d)%26;
    if(c>='a' && c<='z') return 'a' + (c-'a'+d)%26;
    return c;
}

int main()
{

    ofstream archivo("mensaje.txt");
    int n;
    cout << "Cuantas lineas desea ingresar en mensaje.txt? ";
    cin >> n;
    cin.ignore();
    string linea;
    for(int i=0;i<n;i++)
    {
        cout << "Linea " << i+1 << ": ";
        getline(cin,linea);
        archivo << linea << endl;
    }
    archivo.close();

    ifstream entrada("mensaje.txt");
    ofstream salida("mensaje_cifrado.txt");
    int desplazamiento = 3;
    while(getline(entrada,linea))
    {
        for(char c:linea){
            salida << cifrar(c,desplazamiento);
        }
        salida << endl;
    }
    entrada.close();
    salida.close();
    cout << "Archivo 'mensaje_cifrado.txt' generado." << endl;
    return 0;
}
