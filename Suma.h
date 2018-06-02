// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Suma.h
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#ifndef SUMA_H
#define SUMA_H

#include <string>
#include "Operacion.h"

using namespace std;

class Suma : public Operacion {
   public:
    Suma();
    Suma(double, double);
    ~Suma();
    void evaluar();
    string serializar();
};

#endif  // SUMA_H
