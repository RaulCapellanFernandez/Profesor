#include "profesor.h"
#include <vector>

Profesor::Profesor(string nombre, string apellido, string dni):Trabajador(nombre, apellido, dni){

}

void Profesor::aniadirAlumno(Alumno* alumno){
    alumnos.push_back(alumno);
}

void Profesor::aniadirNotas(int numAlumno, int nota){
    alumnos[numAlumno]->setNotas(nota);
}

float Profesor::notaMedia(vector<int> notas){
    float media = 0;
    int divisor = 0;
    if(notas.empty())
        media = 0;
    if(notas.size() == 2){
        for(unsigned int i = 0; i<2; i++){
            media = notas[i] + media;
        }
        media = media/2;
    }
    if(notas.size() >= 3){
        for(unsigned int i = 0; i<3; i++){
            media = notas[i] + media;
        }
        media = media/3;
    }

    return media;
}

void Profesor::imprimirAlumnos(){

    vector<int> notasTodo;

    for(unsigned int i = 0; i < alumnos.size(); i++){
        notasTodo = alumnos[i]->getNotas();
        cout << "Alumno: " << alumnos[i]->getNombre()<< " "<< alumnos[i]->getApellido()<< " " << alumnos[i]->getDNI() << endl;

        for(unsigned int j = 0; j < alumnos[i]->getNotas().size(); j++){
            cout << "Notas: " << notasTodo[j] <<endl;
        }
        cout <<"Numero de notas que tiene: "<<alumnos[i]->numeroNotas()<<endl;
        cout << "Nota Media: " << notaMedia(alumnos[i]->getNotas())<< endl;

        cout << "-------------------------------------"<< endl;
    }
}

void Profesor::mejorNota(){
    int mejor = 0;
    int posicionAlumno = 0;

    for(unsigned int i = 0; i< alumnos.size(); i++){
        if(alumnos[i]->getNotas().size() == 3){
            if(notaMedia(alumnos[i]->getNotas()) > mejor){
                mejor = notaMedia(alumnos[i]->getNotas());
                posicionAlumno = i;
            }
        }
    }

    cout <<"El mejor es: "<< alumnos[posicionAlumno]->getNombre()<<" "<<alumnos[posicionAlumno]->getApellido()<<" con una nota media de: "<< mejor<<endl;
}





