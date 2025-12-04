// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 5

#include <iostream>
#include <string.h>

using namespace std;

struct Pelicula 
{
    char titulo[50];
    char director[50];
    int duracion;
    int anio_estreno;
    char genero[30];
};

int main() 
{
    int N;
    cout << "Ingrese la cantidad de peliculas: ";
    cin >> N;
    cin.ignore();

    Pelicula peliculas[100];

    for(int i=0; i<N; i++)
    {
        cout << "\nPELICULA " << i+1 << endl;
        cout << "Titulo: ";
        cin.getline(peliculas[i].titulo, 50);
        cout << "Director: ";
        cin.getline(peliculas[i].director, 50);
        cout << "Duracion (minutos): ";
        cin >> peliculas[i].duracion;
        cout << "Anio de estreno: ";
        cin >> peliculas[i].anio_estreno;
        cin.ignore();
        cout << "Genero: ";
        cin.getline(peliculas[i].genero, 30);
    }

    char genero_buscar[30];
    cout << "\nIngrese el genero a buscar: ";
    cin.getline(genero_buscar, 30);

    cout << "\nPELICULAS DEL GENERO " << genero_buscar << ":\n";
    for(int i=0; i<N; i++)
    {
        if(strcmp(peliculas[i].genero, genero_buscar) == 0)
        {
            cout << peliculas[i].titulo << " (" << peliculas[i].anio_estreno << "), Director: " 
                 << peliculas[i].director << endl;
        }
    }

    char director_buscar[50];
    cout << "\nIngrese el director a buscar: ";
    cin.getline(director_buscar, 50);

    cout << "\nPELICULAS DEL DIRECTOR " << director_buscar << ":\n";
    for(int i=0; i<N; i++)
    {
        if(strcmp(peliculas[i].director, director_buscar) == 0)
        {
            cout << peliculas[i].titulo << " (" << peliculas[i].anio_estreno << "), Genero: " 
                 << peliculas[i].genero << endl;
        }
    }

    return 0;
}
