#include "trabajador.h"


Trabajador::Trabajador(string nombre, string apellido, string dni){ //Constructor igual que en java pero se declaran las variables directamente
    this->nombre = nombre;
    this->apellido = apellido;
    this->dni = dni;
}


Trabajador::Trabajador()//Constructor vacio
{

}

//getter y setters de los atributos de la clase igual que en java


//NOMBRE
void Trabajador::setNombre(string nombre){
    this->nombre = nombre;
}
string Trabajador::getNombre(){
    return nombre;
}


//APELLIDO
void Trabajador::setApellido(string apellido){
    this->apellido = apellido;
}
string Trabajador::getApellido(){
    return apellido;
}


//DNI
void Trabajador::setDNI(string dni){
    this->dni = dni;
}
string Trabajador::getDNI(){
    return dni;
}


