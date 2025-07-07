#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
#define SEP ","



struct Mascota
{
    int edad;
    string tipo;
    string nombre;
};
struct Alumno
{
    int id, edad;
    string nombre;
    Mascota mascotita;
};
vector<Alumno> Lista_Alumnos;
void writefileAlumno(const string FilePath)
{
    ofstream f(FilePath,ios::out | ios::trunc );
    if(!f)
    {
        cerr << "Error al abrir" << FilePath << endl;
    return ;
    }
   
    for ( auto&&a : Lista_Alumnos)
    {
        f << a.id << SEP << a.nombre << SEP << a.mascotita.edad << SEP << a.mascotita.tipo << SEP << a.mascotita.nombre << endl;
    }
    f.close();
}

int main()
{
Alumno a1= {1,20,"pepe",{1,"Perro","firulais",}}; //dar valores a la struct de forma directa
Alumno a2= {2,19,"Juana"};
Lista_Alumnos.push_back(a1);
Lista_Alumnos.push_back(a2);
writefileAlumno("Alumnos.csv");
return 0;
}