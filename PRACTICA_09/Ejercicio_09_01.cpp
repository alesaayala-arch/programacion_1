// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Fecha creación: 04/12/2025
// Número de ejercicio: 1

#include <iostream>
#include <string.h>

using namespace std;

struct Libro 
{
    char titulo[50];
    char autor[50];
    int anio_publicacion;
    bool disponible;
};

int main() 
{
    Libro libro;

    cout << "Ingrese el titulo del libro: ";
    cin.getline(libro.titulo, 50);

    cout << "Ingrese el autor del libro: ";
    cin.getline(libro.autor, 50);

    cout << "Ingrese el anio de publicacion: ";
    cin >> libro.anio_publicacion;

    cout << "El libro esta disponible? (1=SI, 0=NO): ";
    cin >> libro.disponible;

    cout << "\nDATOS DEL LIBRO\n";
    cout << "Titulo: " << libro.titulo << endl;
    cout << "Autor: " << libro.autor << endl;
    cout << "Anio: " << libro.anio_publicacion << endl;
    cout << "Estado: " << (libro.disponible ? "Disponible" : "No disponible") << endl;

    return 0;
}