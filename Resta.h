// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Resta.h
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#ifndef RESTA_H
#define RESTA_H

#include <string>
#include "Operacion.h"

using namespace std;

class Resta : public Operacion {
   public:
    using Operacion::Operacion;
    void evaluar();
    string serializar();
};

#endif  // RESTA_H
