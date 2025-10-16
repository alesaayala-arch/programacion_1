// Materia: Programación I, Paralelo 3
// Autor:Alesa Pierina Ayala Aliaga
// Fecha creación: 16/10/2024
// Número de ejercicio: 3

#include <iostream>
using namespace std;

const int FILAS = 3;
const int COLUMNAS = 4;

int mostrarMatriz(char matriz[FILAS][COLUMNAS]);
int filasLibres(char matriz[FILAS][COLUMNAS]);
int columnasLibres(char matriz[FILAS][COLUMNAS]);
int posicionesMuertos(char matriz[FILAS][COLUMNAS]);
int totalMuertos(char matriz[FILAS][COLUMNAS]);
int puedeEntrar(char matriz[FILAS][COLUMNAS]);
int espacioLibre(char matriz[FILAS][COLUMNAS]);

int main() 
{
    char MATRIZ[FILAS][COLUMNAS];

    cout << "Ingrese la matriz (x = muerto, o = libre):" << endl;
    for (int i = 0; i < FILAS; i++) 
    {
        for (int j = 0; j < COLUMNAS; j++) 
        {
            cin >> MATRIZ[i][j];
        }
    }

    cout << "\na) Mostrar matriz" << endl;
    mostrarMatriz(MATRIZ);

    cout << "\nb) filas libres: " << filasLibres(MATRIZ) << endl;
    cout << "   columnas libres: " << columnasLibres(MATRIZ) << endl;

    cout << "\nc) Posiciones en la matriz:" << endl;
    posicionesMuertos(MATRIZ);

    cout << "\nd) total muertos vivientes: " << totalMuertos(MATRIZ) << endl;

    cout << "\ne) ";
    if (puedeEntrar(MATRIZ) == 1)
        cout << "es posible entrar al complejo!" << endl;
    else
        cout << "no es posible entrar al complejo!" << endl;

    cout << "\nf) espacio libre: " << espacioLibre(MATRIZ) << endl;

    return 0;
}

int mostrarMatriz(char matriz[FILAS][COLUMNAS])
 {
    for (int i = 0; i < FILAS; i++) 
    {
        for (int j = 0; j < COLUMNAS; j++) 
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


int filasLibres(char matriz[FILAS][COLUMNAS]) 
{
    int libres = 0;
    for (int i = 0; i < FILAS; i++) 
    {
        int tieneMuerto = 0;
        for (int j = 0; j < COLUMNAS; j++) 
        {
            if (matriz[i][j] == 'x')
                tieneMuerto = 1;
        }
        if (tieneMuerto == 0)
            libres++;
    }
    return libres;
}


int columnasLibres(char matriz[FILAS][COLUMNAS]) 
{
    int libres = 0;
    for (int j = 0; j < COLUMNAS; j++) 
    {
        int tieneMuerto = 0;
        for (int i = 0; i < FILAS; i++) 
        {
            if (matriz[i][j] == 'x')
                tieneMuerto = 1;
        }
        if (tieneMuerto == 0)
            libres++;
    }
    return libres;
}

int posicionesMuertos(char matriz[FILAS][COLUMNAS]) 
{
    for (int i = 0; i < FILAS; i++) 
    {
        for (int j = 0; j < COLUMNAS; j++) 
        {
            if (matriz[i][j] == 'x') 
            {
                cout << i << " -- " << j << endl;
            }
        }
    }
    return 0;
}


int totalMuertos(char matriz[FILAS][COLUMNAS]) 
{
    int total = 0;
    for (int i = 0; i < FILAS; i++) 
    {
        for (int j = 0; j < COLUMNAS; j++) 
        {
            if (matriz[i][j] == 'x')
                total++;
        }
    }
    return total;
}


int puedeEntrar(char matriz[FILAS][COLUMNAS]) 
{
    int contador = 0;
    for (int i = 0; i < FILAS; i++) 
    {
        if (matriz[i][0] == 'x')
            contador++;
    }
    if (contador >= 2)
        return 0; 
    else
        return 1; 
}


int espacioLibre(char matriz[FILAS][COLUMNAS]) 
{
    int libres = 0;
    for (int i = 0; i < FILAS; i++) 
    {
        for (int j = 0; j < COLUMNAS; j++) 
        {
            if (matriz[i][j] == 'o')
                libres++;
        }
    }
    return libres;
}