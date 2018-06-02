// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Suma.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#ifndef CALCULADORA_SUMA_H
#define CALCULADORA_SUMA_H

#include <string>
#include "Operacion.h"

class Suma: public Operacion {
public:
    string evaluar();
};


#endif //CALCULADORA_SUMA_H
