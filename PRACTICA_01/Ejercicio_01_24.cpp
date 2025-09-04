// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaga
// Carnet: E-17844032 L.P.
// Carrera del estudiante: Ingeniería Biomédica 
// Fecha creación: 04/09/2025
// Número de ejercicio: 24

#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "     MENU    " << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Selecciono la Opcion 1" << endl;
                break;
            case 2:
                cout << "Selecciono la Opcion 2" << endl;
                break;
            case 3:
                cout << "Selecciono la Opcion 3" << endl;
                break;
            case 0:
                cout << "Salio del programa" << endl;
                break;
            default:
                cout << "Opcion invalida, intente de nuevo." << endl;
        }

        cout << endl; 

    } while(opcion != 0);

    return 0;
}