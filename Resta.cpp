// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Resta.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Resta.h"

void Resta::evaluar() { resultado = operando1 - operando2; }

string Resta::serializar() { return to_string(resultado); }