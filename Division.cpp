// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Division.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Division.h"
#include <sstream>

void Division::evaluar() {
    if (operando2 == 0.0) {
        hayError = true;
        mensajeError = "Error: división entre 0";
    } else {
        resultado = operando1 / operando2;
    }
}

string Division::serializar() {
    ostringstream flujo;

    if (hayError) {
        return mensajeError;
    } else {
        flujo << operando1 << " / " << operando2 << " = " << resultado << endl;

        return flujo.str();
    }
}