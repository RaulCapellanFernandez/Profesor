#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include <iostream>
#include <string>

using namespace std;

class Trabajador{
public:
    Trabajador();//Constructor de la clase
    Trabajador(string nombre, string apellido, string dni);//constructor sobrecargado
    ~Trabajador(void);//Destructor de la clase

    void setNombre(string nombre);
    string getNombre();
    void setApellido(string apellido);
    string getApellido();
    void setDNI(string dni);
    string getDNI();

private:
    string nombre;
    string apellido;
    string dni;

};

#endif // TRABAJADOR_H
