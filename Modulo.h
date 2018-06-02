// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Modulo.h
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#ifndef MODULO_H
#define MODULO_H

#include <string>
#include "Operacion.h"

using namespace std;

class Modulo : public Operacion {
   public:
    Modulo();
    Modulo(double, double);
    ~Modulo();
    void evaluar();
    string serializar();
};

#endif  // MODULO_H
