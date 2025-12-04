// Materia: Programación I, Paralelo 4
// Autor: Alesa Pierina Ayala Aliaa
// Fecha creación: 04/12/2025
// Número de ejercicio: 1

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

struct structEstudiante 
{
    char ci[10];
    char nombres[30];
    char apellidos[30];
};

struct structNotas 
{
    char ci[10];
    char materia[30];
    int nota;
};

void IngresarEstudiante(string nombreArchivo);
void IngresarNotas(string nombreArchivoEst, string nombreArchivoNotas);
void Reporte(string nombreArchivoEst, string nombreArchivoNotas);
void Menu(string nombreArchivoEst, string nombreArchivoNotas);

int main() 
{
    string archivoEst = "Estudiantes.bin";
    string archivoNotas = "Notas.bin";
    Menu(archivoEst, archivoNotas);
    return 0;
}


void IngresarEstudiante(string nombreArchivo) 
{
    structEstudiante est;
    ofstream archivo(nombreArchivo, ios::binary | ios::app);
    if(!archivo) {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }
    cout << "Ingrese CI: ";
    cin >> est.ci;

    ifstream verificar(nombreArchivo, ios::binary);
    structEstudiante aux;
    while(verificar.read((char*)&aux, sizeof(structEstudiante))) 
    {
        if(strcmp(aux.ci, est.ci) == 0){
            cout << "Estudiante ya existe!" << endl;
            return;
        }
    }
    cin.ignore();
    cout << "Ingrese nombres: ";
    cin.getline(est.nombres,30);
    cout << "Ingrese apellidos: ";
    cin.getline(est.apellidos,30);
    archivo.write((char*)&est,sizeof(structEstudiante));
    archivo.close();
}


void IngresarNotas(string nombreArchivoEst, string nombreArchivoNotas)
{
    structNotas nota;
    structEstudiante est;
    ofstream archivo(nombreArchivoNotas, ios::binary | ios::app);
    if(!archivo) { cout << "No se pudo abrir archivo de notas.\n"; return; }

    cout << "Ingrese CI del estudiante: ";
    cin >> nota.ci;

    ifstream estFile(nombreArchivoEst, ios::binary);
    bool existe = false;
    while(estFile.read((char*)&est,sizeof(structEstudiante)))
    {
        if(strcmp(est.ci, nota.ci)==0){ existe=true; break;}
    }
    estFile.close();
    if(!existe){ cout << "Estudiante no existe.\n"; return; }

    cin.ignore();
    cout << "Ingrese materia: ";
    cin.getline(nota.materia,30);


    ifstream notasFile(nombreArchivoNotas, ios::binary);
    structNotas aux;
    while(notasFile.read((char*)&aux,sizeof(structNotas)))
    {
        if(strcmp(aux.ci,nota.ci)==0 && strcmp(aux.materia,nota.materia)==0)
        {
            cout << "Materia ya registrada para este estudiante.\n";
            return;
        }
    }
    notasFile.close();

    cout << "Ingrese nota: ";
    cin >> nota.nota;
    archivo.write((char*)&nota,sizeof(structNotas));
    archivo.close();
}


void Reporte(string nombreArchivoEst, string nombreArchivoNotas)
{
    structEstudiante est;
    structNotas nota;
    ifstream estFile(nombreArchivoEst, ios::binary);
    ifstream notasFile(nombreArchivoNotas, ios::binary);

    cout << "REPORTE DE ESTUDIANTES Y NOTAS\n";
    while(estFile.read((char*)&est,sizeof(structEstudiante)))
    {
        cout << "CI: " << est.ci << " - " << est.nombres << " " << est.apellidos << endl;
        notasFile.clear(); notasFile.seekg(0);
        while(notasFile.read((char*)&nota,sizeof(structNotas)))
        {
            if(strcmp(est.ci, nota.ci)==0)
            {
                cout << "\tMateria: " << nota.materia << " - Nota: " << nota.nota << endl;
            }
        }
    }
    estFile.close();
    notasFile.close();
}


void Menu(string nombreArchivoEst, string nombreArchivoNotas)
{
    int opcion;
    do{
        cout << "\nMENU ESTUDIANTES\n";
        cout << "1. Ingreso de estudiantes\n";
        cout << "2. Ingreso de notas\n";
        cout << "3. Reporte\n";
        cout << "0. Salir\n";
        cout << "Seleccione opcion: ";
        cin >> opcion;
        switch(opcion){
            case 1: IngresarEstudiante(nombreArchivoEst); break;
            case 2: IngresarNotas(nombreArchivoEst,nombreArchivoNotas); break;
            case 3: Reporte(nombreArchivoEst,nombreArchivoNotas); break;
            case 0: break;
            default: cout << "Opcion invalida.\n";
        }
    } while(opcion!=0);
}

