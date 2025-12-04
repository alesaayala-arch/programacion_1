#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

struct Estudiante 
{
    char ci[15];
    char nombres[30];
    char apellidos[30];
    char materia[30];
    int paralelo;
    double notaHabilitacion;
    bool habilitado;
};

void AdicionarEstudiante(string archivo);
void ListadoHabilitados(string archivo);
void EliminarEstudiante(string archivo);
void AdicionarNotasHabilitacion(string archivo);
void MenuNotasUCB(string archivo);

int main()
{
    string archivo="ESTUDIANTES.BIN";
    MenuNotasUCB(archivo);
    return 0;
}


void AdicionarEstudiante(string archivo)
{
    Estudiante est;
    ofstream file(archivo, ios::binary | ios::app);
    if(!file){ cout << "No se pudo abrir archivo.\n"; return; }

    cout << "Carnet: "; cin >> est.ci; cin.ignore();
    cout << "Nombres: "; cin.getline(est.nombres,30);
    cout << "Apellidos: "; cin.getline(est.apellidos,30);
    cout << "Materia: "; cin.getline(est.materia,30);
    cout << "Paralelo: "; cin >> est.paralelo;
    est.notaHabilitacion=0; est.habilitado=false;
    file.write((char*)&est,sizeof(Estudiante));
    file.close();
}


void ListadoHabilitados(string archivo)
{
    ifstream file(archivo, ios::binary);
    if(!file){ cout << "No se pudo abrir archivo.\n"; return; }

    Estudiante est;
    double sumaNotas=0;
    int cont=0;
    cout << "CARNET NOMBRES APELLIDOS MATERIA PARALELO NOTA HABILITACION ESTADO\n";
    while(file.read((char*)&est,sizeof(Estudiante))){
        string estado = est.habilitado ? "HABILITADO" : "NO HABILITADO";
        cout << est.ci << " " << est.nombres << " " << est.apellidos << " "
             << est.materia << " " << est.paralelo << " " << est.notaHabilitacion
             << " " << estado << endl;
        sumaNotas += est.notaHabilitacion; cont++;
    }
    file.close();
    if(cont>0) cout << "Promedio de notas de habilitación: " << sumaNotas/cont << endl;
}


void EliminarEstudiante(string archivo)
{
    fstream file(archivo, ios::binary | ios::in | ios::out);
    if(!file){ cout << "No se pudo abrir archivo.\n"; return; }

    char ci[15]; cout << "Ingrese CI a eliminar: "; cin >> ci;
    Estudiante est; bool encontrado=false;
    while(file.read((char*)&est,sizeof(Estudiante)) && !encontrado){
        if(strcmp(est.ci,ci)==0){
            encontrado=true;
            est.ci[0]='\0'; 
            file.seekp(-sizeof(Estudiante), ios::cur);
            file.write((char*)&est,sizeof(Estudiante));
        }
    }
    if(!encontrado) cout << "Estudiante no encontrado.\n";
    file.close();
}


void AdicionarNotasHabilitacion(string archivo)
{
    fstream file(archivo, ios::binary | ios::in | ios::out);
    if(!file){ cout << "No se pudo abrir archivo.\n"; return; }

    char ci[15]; double nota;
    cout << "Ingrese CI estudiante: "; cin >> ci;
    cout << "Ingrese nota de habilitacion: "; cin >> nota;

    Estudiante est; bool encontrado=false;
    while(file.read((char*)&est,sizeof(Estudiante)) && !encontrado){
        if(strcmp(est.ci,ci)==0){
            encontrado=true;
            est.notaHabilitacion=nota;
            est.habilitado = (nota >= 60);
            file.seekp(-sizeof(Estudiante), ios::cur);
            file.write((char*)&est,sizeof(Estudiante));
        }
    }
    if(!encontrado) cout << "Estudiante no encontrado.\n";
    file.close();
}


void MenuNotasUCB(string archivo)
{
    int opcion;
    do{
        cout << "\nMENU NOTAS UCB\n";
        cout << "1. Adicionar Estudiante\n2. Listado Estudiantes Habilitados\n";
        cout << "3. Eliminar Estudiante\n4. Adicionar notas habilitacion\n0. Salir\n";
        cout << "Seleccione opcion: "; cin >> opcion; cin.ignore();
        switch(opcion){
            case 1: AdicionarEstudiante(archivo); break;
            case 2: ListadoHabilitados(archivo); break;
            case 3: EliminarEstudiante(archivo); break;
            case 4: AdicionarNotasHabilitacion(archivo); break;
            case 0: break;
            default: cout << "Opcion invalida.\n";
        }
    }while(opcion!=0);
}
