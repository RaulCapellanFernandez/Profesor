#include <iostream>
#include <string>
#include "trabajador.h"
#include "alumno.h"
#include "profesor.h"



void imprime(){

    Trabajador *profesor = new Profesor("Fernando", "Guerra", "12334T");
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<< "Profesor ->   " << profesor->getNombre()<<" "<<profesor->getApellido()<<" "<<profesor->getDNI()<<endl;
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

    Trabajador *alumno1 = new Alumno("Henar", "Robla Alvarez", "21234255M");
    ((Profesor*)profesor)->aniadirAlumno(((Alumno*)alumno1));

    ((Profesor*)profesor)->aniadirNotas(0,5);
    ((Alumno*)alumno1)->setNotas(8);
    ((Profesor*)profesor)->aniadirNotas(0,10);


    Trabajador *alumno2 = new Alumno("Ignacio", "Macias Rodriguez", "46457567568U");
    ((Profesor*)profesor)->aniadirAlumno(((Alumno*)alumno2));

    ((Profesor*)profesor)->aniadirNotas(1,3);
    ((Alumno*)alumno2)->setNotas(2);
    ((Profesor*)profesor)->aniadirNotas(1,1);

    Trabajador *alumno3 = new Alumno("Alejandra", "Garcia Alvarez", "3534535345Y");
    ((Profesor*)profesor)->aniadirAlumno(((Alumno*)alumno3));

    ((Alumno*)alumno3)->setNotas(10);
    //((Profesor*)profesor)->aniadirNotas(2,10);
    ((Profesor*)profesor)->aniadirNotas(2,10);

    ((Profesor*)profesor)->imprimirAlumnos();
    ((Profesor*)profesor)->mejorNota();
    cout<<"//////////////////////////////////////////////////"<<endl;
    cout<<"Ver Notas desde Alumno"<<endl;
    cout<<"-> "<<((Alumno*)alumno1)->getNombre()<<" "<<((Alumno*)alumno1)->getApellido()<<endl;
    cout<<"-> Numero de Notas: "<<((Alumno*)alumno1)->numeroNotas()<<endl;
    for(unsigned int i = 0; i <((Alumno*)alumno1)->numeroNotas(); i++){
        cout<<"Nota "<<i+1<<": "<<((Alumno*)alumno1)->getNotas()[i]<<endl;
    }
}
int main()
{
    imprime();
    return 0;
}


