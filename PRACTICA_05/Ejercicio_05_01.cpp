// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 02/10/2025
// Número de ejercicio: 1
// Problema planteado:

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
vector<double> generarVoltajes(int n) 
{
    vector<double> v(n);
    for (int i = 0; i < n; i++) 
    {
        v[i] = 20.0 + (rand() / (double)RAND_MAX) * (220.0 - 20.0);
    }
    return v;
}


vector<double> generarTemperaturas(int n) 
{
    vector<double> t(n);
    for (int i = 0; i < n; i++) 
    {
        t[i] = (rand() / (double)RAND_MAX) * 100.0;
    }
    return t;
}

vector<char> generarCaracteres(int n) 
{
    vector<char> c(n);
    for (int i = 0; i < n; i++) 
    {
        if (rand() % 2 == 0) 
        {
            c[i] = 65 + rand() % 26; 
        } 
        else 
        {
            c[i] = 97 + rand() % 26;  
        }
    }
    return c;
}


vector<int> generarAnios(int n) 
{
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        a[i] = 1990 + rand() % (2025 - 1990 + 1);
    }
    return a;
}


vector<double> generarVelocidades(int n) 
{
    vector<double> vel(n);
    for (int i = 0; i < n; i++) 
    {
        vel[i] = 10.0 + (rand() / (double)RAND_MAX) * (300.0 - 10.0);
    }
    return vel;
}


vector<double> generarDistancias(int n) 
{
    vector<double> d(n);
    for (int i = 0; i < n; i++) 
    {
        d[i] = 1.0 + (rand() / (double)RAND_MAX) * (1000.0 - 1.0);
    }
    return d;
}

int main() 
{
    srand(time(0));

    vector<double> voltajes = generarVoltajes(100);
    vector<double> temperaturas = generarTemperaturas(50);
    vector<char> caracteres = generarCaracteres(30);
    vector<int> anios = generarAnios(100);
    vector<double> velocidades = generarVelocidades(32);
    vector<double> distancias = generarDistancias(1000);

    cout << "Voltajes: ";
    for (int i = 0; i < 5; i++) 
    cout << voltajes[i] << " ";
    cout << endl;

    cout << "Temperaturas: ";
    for (int i = 0; i < 5; i++) 
    cout << temperaturas[i] << " ";
    cout << endl;

    cout << "Caracteres: ";
    for (int i = 0; i < 30; i++) 
    cout << caracteres[i] << " ";
    cout << endl;

    cout << "Anios: ";
    for (int i = 0; i < 5; i++) 
    cout << anios[i] << " ";
    cout << endl;

    cout << "Velocidades: ";
    for (int i = 0; i < 5; i++) 
    cout << velocidades[i] << " ";
    cout << endl;

    cout << "Distancias: ";
    for (int i = 0; i < 5; i++) cout << distancias[i] << " ";
    cout << endl;

    return 0;
}