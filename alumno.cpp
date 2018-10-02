#include "alumno.h"
#include <vector>

vector<int> notas;
int numerAlumnos = 0;

Alumno::Alumno(string nombre, string apellido, string dni):Trabajador(nombre, apellido, dni){
    this->numAlumno = numerAlumnos++;
    this->numNota = numNota;
}

void Alumno::setNotas(int numNota){
    if(notas.size()<4)
        notas.push_back(numNota);
}

vector<int> Alumno::getNotas(){
    return notas;
}

int Alumno::numeroNotas(){
    return notas.size();
}

