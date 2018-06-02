// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Raiz.h
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include <cmath>
#include "Raiz.h"

Raiz::Raiz() { Operacion::Operacion(); }

Raiz::Raiz(double op1) { Operacion::Operacion(op1, 0.0); }

Raiz::~Raiz() { Operacion::~Operacion(); }

void Raiz::evaluar() {
    if(operando1 < 0.0) {
        hayError = true;
    }
    else {
        resultado = sqrt(operando1);
    }
}

string Raiz::serializar() {
    if(hayError) {
        return "Error: no existe raíz real de número negativo";
    }
    else {
        return to_string(resultado);
    }
}