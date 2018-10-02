#ifndef ALUMNO_H
#define ALUMNO_H

#include "trabajador.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Alumno : public Trabajador
{
public:
    Alumno(string nombre, string apellido, string dni);
    ~Alumno();

    void setNotas(int numNota);
    vector<int> getNotas();
    int getMedia();
    int numeroNotas();


private:
    int numNota;
    vector<int> notas;
    int numerAlumnos;
    int numAlumno;
};

#endif // ALUMNO_H
