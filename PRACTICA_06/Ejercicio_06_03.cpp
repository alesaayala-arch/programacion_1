// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 3
// Problema planteado:

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

vector<string> nombres = {"Ana","Luis","Carlos","Maria","Jose","Elena","Pedro","Lucia","Diego","Sofia"};
vector<string> apellidos = {"Perez","Gomez","Lopez","Diaz","Martinez","Fernandez","Sanchez","Romero","Vargas","Torres"};
vector<int> edades(50);


void generarEdadesAleatorias() 
{
    for (int i = 0; i < edades.size(); i++) 
    {
        edades[i] = 1 + rand() % 100; 
    }
}


void generarCombinacionesAleatorias(int N) 
{
    for (int i = 0; i < N; i++) 
    {
        int indiceNombre = rand() % nombres.size();
        int indiceApellido = rand() % apellidos.size();
        int indiceEdad = rand() % edades.size();

        cout << "Combinacion " << i+1 << ": ";
        cout << nombres[indiceNombre] << " ";
        cout << apellidos[indiceApellido] << ", ";
        cout << edades[indiceEdad] << " edad" << endl;
    }
}

int main() 
{
    srand(time(0)); 

    generarEdadesAleatorias(); 

    int N;
    cout << "Cuantas veces desea generar aleatoriamente? ";
    cin >> N;

    generarCombinacionesAleatorias(N);

    return 0;
}