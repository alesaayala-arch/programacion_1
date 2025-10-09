// Materia: Programación I, Paralelo 1
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 09/10/2024
// Número de ejercicio: 1
// Problema planteado:

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void leerEdades(vector<int>& edades);
double calcularMedia(const vector<int>& edades);
double calcularDesviacionTipica(const vector<int>& edades, double media);

int main() 
{
    vector<int> edades;
    
    leerEdades(edades);
    
    if (edades.empty()) 
    {
        cout << "No se ingresaron edades válidas." << endl;
        return 0;
    }

    double media = calcularMedia(edades);
    double desviacion = calcularDesviacionTipica(edades, media);

    cout << "\nMedia de edades: " << media << endl;
    cout << "Desviacion tipica: " << desviacion << endl;

    return 0;
}

void leerEdades(vector<int>& edades) 
{
    int edad;
    cout << "Ingrese edades (use -1 para terminar): " << endl;
     while (edad != -1) 
     {
        cin >> edad;
        if (edad == -1) 
        {
            cout << "Fin del ingreso de edades." << endl;
        } 
        else if (edad >= 0) 
        {
            edades.push_back(edad);
        } 
        else 
        {
            cout << "Edad invalida, intente otra: ";
        }
     }
}


double calcularMedia(const vector<int>& edades) 
{
    double suma = 0.0;
    for (int i = 0; i < edades.size(); i++) 
    {
        suma += edades[i]; 
    }
    return suma / edades.size();
}


double calcularDesviacionTipica(const vector<int>& edades, double media) 
{
    double suma = 0.0;
    for (int i = 0; i < edades.size(); i++) 
    {
        double diff = edades[i] - media;  
        suma += diff * diff;              
    }
    double varianza = suma / edades.size();
    return sqrt(varianza);
}