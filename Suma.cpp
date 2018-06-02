// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Suma.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Suma.h"

Suma::Suma() { Operacion::Operacion(); }

Suma::Suma(double op1, double op2) { Operacion::Operacion(op1, op2); }

Suma::~Suma() { Operacion::~Operacion(); }

void Suma::evaluar() { resultado = operando1 + operando2; }

string Suma::serializar() { return to_string(resultado); }