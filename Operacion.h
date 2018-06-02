// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Operacion.h
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#ifndef CALCULADORA_OPERACION_H
#define CALCULADORA_OPERACION_H

#include <string>

using namespace std;

class Operacion {
private:
    double operando1, operando2;
    double resultado;
public:
    Operacion(double, double);
    ~Operacion();
    virtual string evaluar();
};


#endif //CALCULADORA_OPERACION_H
