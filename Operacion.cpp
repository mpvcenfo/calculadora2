// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Operacion.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Operacion.h"

Operacion::Operacion() {
    operando1 = 0.0;
    operando2 = 0.0;
    resultado = 0.0;
    hayError = false;
    mensajeError = "";
}

Operacion::Operacion(double op1) {
    operando1 = op1;
    operando2 = 0.0;
    resultado = 0.0;
    hayError = false;
    mensajeError = "";
}

Operacion::Operacion(double op1, double op2) {
    operando1 = op1;
    operando2 = op2;
    resultado = 0.0;
    hayError = false;
    mensajeError = "";
}

Operacion::~Operacion() {}

void Operacion::evaluar() {}

string Operacion::serializar() { return ""; }