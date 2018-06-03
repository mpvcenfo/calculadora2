// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Multiplicacion.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Multiplicacion.h"
#include <sstream>

void Multiplicacion::evaluar() { resultado = operando1 * operando2; }

string Multiplicacion::serializar() {
    ostringstream flujo;

    flujo << operando1 << " * " << operando2 << " = " << resultado << endl;

    return flujo.str();
}