// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Raiz.h
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#ifndef RAIZ_H
#define RAIZ_H

#include <string>
#include "Operacion.h"

using namespace std;

class Raiz : public Operacion {
   public:
    Raiz();
    Raiz(double);
    ~Raiz();
    void evaluar();
    string serializar();
};

#endif  // RAIZ_H
