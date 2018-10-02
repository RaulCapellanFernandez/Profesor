#ifndef PROFESOR_H
#define PROFESOR_H

#include "trabajador.h"
#include "alumno.h"
#include <vector>

class Profesor : public Trabajador
{
public:
    Profesor(string nombre, string apellido, string dni);
    ~Profesor();

    vector<Alumno*> alumnos;

    void aniadirAlumno(Alumno*);
    void aniadirNotas(int numAlum, int nota);
    float notaMedia(vector<int> notas);
    void imprimirAlumnos();
    void mejorNota();

};

#endif // PROFESOR_H
