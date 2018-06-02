// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Calculadora.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Calculadora.h"

void Calculadora::iniciar() {
    if(historial == nullptr) {
        historial = new vector<Operacion>();
    }
}

void Calculadora::terminar() {
    delete operacionActual;
    delete historial;
}

static string Calculadora::sumar(double operador1, double operador2) {
    Operacion* operacion;

    operacionActual = new Suma(operador1, operador2);

    return operadorActual.evaluar();
}

