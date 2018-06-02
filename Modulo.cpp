// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Modulo.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Modulo.h"

Modulo::Modulo() { Operacion::Operacion(); }

Modulo::Modulo(double op1, double op2) { Operacion::Operacion(op1, op2); }

Modulo::~Modulo() { Operacion::~Operacion(); }

void Modulo::evaluar() {
    if (operando2 == 0.0) {
        hayError = true;
        mensajeError = "Error: módulo 0 no está definido";
    } else {
        resultado = int(operando1) % int(operando2);
    }
}

string Modulo::serializar() {
    if (hayError) {
        return mensajeError;
    } else {
        return to_string(resultado);
    }
}