#include <string>
#include <iostream>
using namespace std;


struct Mascota
{
    int edad;
    string nombre;
};
struct Alumno
{
    int id, edad;
    char nombre[20];
    Mascota mascotita;
};
int main()
{
    int a;
    Alumno a0;
    Alumno a1= {1,20,"pepe",{1,"perrito"}}; //dar valores a la struct de forma directa

    
    a0.id = 0;
    a0.edad = 21;
    a0.nombre[0] = 'Ana' ;
    a0.mascotita.edad = 1;
a0.mascotita.nombre = "niko";

}