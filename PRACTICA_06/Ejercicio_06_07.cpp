// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 7
// Problema planteado:

#include <iostream>
#include <vector>
#include <cstdlib>  
#include <ctime>   

using namespace std;


void generarImagen(vector<int>& imagen) 
{
    for (int i = 0; i < imagen.size(); i++) 
    {
        imagen[i] = rand() % 256;
    }
}


void mostrarImagen(const vector<int>& imagen) 
{
    cout << "Valores de la imagen: ";
    for (int i = 0; i < imagen.size(); i++) 
    {
        cout << imagen[i] << " ";
    }
    cout << endl;
}


void contarPixelesPorRango(const vector<int>& imagen) 
{
    const int rangos = 26;
    int conteo[rangos] = {0};

    
    for (int i = 0; i < imagen.size(); i++) 
    {
        int valor = imagen[i];
        int indice = valor / 10;
        if (indice >= rangos) 
        {
            indice = rangos - 1; 
        }
        conteo[indice]++;
    }

    for (int i = 0; i < rangos; i++) 
    {
        int inicio = i * 10;
        int fin;
        if (i == rangos - 1) 
        {
            fin = 255;
        } else {
            fin = inicio + 9;
        }
        cout << inicio << "-" << fin << ": " << conteo[i] << " píxeles" << endl;
    }
}

int main() 
{
    srand(time(0));

    int N;
    cout << "Ingrese la cantidad de pixeles de la imagen: ";
    cin >> N;

    vector<int> imagen(N);

    generarImagen(imagen);
    mostrarImagen(imagen);
    contarPixelesPorRango(imagen);

    return 0;
}