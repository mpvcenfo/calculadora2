// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Division.h
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#ifndef DIVISION_H
#define DIVISION_H

#include <string>
#include "Operacion.h"

using namespace std;

class Division : public Operacion {
   public:
    using Operacion::Operacion;
    void evaluar();
    string serializar();
};

#endif  // DIVISION_H