// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Multiplicacion.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Multiplicacion.h"

Multiplicacion::Multiplicacion() { Operacion::Operacion(); }

Multiplicacion::Multiplicacion(double op1, double op2) {
    Operacion::Operacion(op1, op2);
}

Multiplicacion::~Multiplicacion() { Operacion::~Operacion(); }

void Multiplicacion::evaluar() { resultado = operando1 * operando2; }

string Multiplicacion::serializar() { return to_string(resultado); }