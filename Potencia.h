// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Potencia.h
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#ifndef POTENCIA_H
#define POTENCIA_H

#include <string>
#include <cmath>
#include "Operacion.h"

using namespace std;

class Potencia : public Operacion {
   public:
    Potencia();
    Potencia(double, double);
    ~Potencia();
    void evaluar();
    string serializar();
};

#endif //POTENCIA_H
