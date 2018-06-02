// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Calculadora.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Calculadora.h"

void Calculadora::iniciar() { historial = stack<Operacion>(); }

void Calculadora::terminar() {}

string Calculadora::sumar(double operador1, double operador2) {
    Suma suma = Suma(operador1, operador2);

    suma.evaluar();

    historial.push(suma);

    return suma.obtener();
}

string Calculadora::restar(double operador1, double operador2) {
    Resta resta = Resta(operador1, operador2);

    resta.evaluar();

    historial.push(resta);

    return resta.obtener();
}