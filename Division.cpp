// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Division.h
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Division.h"

Division::Division() { Operacion::Operacion(); }

Division::Division(double op1, double op2) { Operacion::Operacion(op1, op2); }

Division::~Division() { Operacion::~Operacion(); }

void Division::evaluar() {
    if (operando2 == 0.0) {
        hayError = true;
        mensajeError = "Error: división entre 0";
    } else {
        resultado = operando1 / operando2;
    }
}

string Division::serializar() {
    if (hayError) {
        return mensajeError;
    } else {
        return to_string(resultado);
    }
}