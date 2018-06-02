// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Operacion.h
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#ifndef OPERACION_H
#define OPERACION_H

#include <string>

using namespace std;

class Operacion {
   protected:
    double operando1, operando2;
    double resultado;
    bool hayError;

   public:
    Operacion();
    Operacion(double, double);
    ~Operacion();
    virtual void evaluar();
    virtual string obtener();
};

#endif  // OPERACION_H
