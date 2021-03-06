// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Potencia.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Potencia.h"
#include <sstream>

void Potencia::evaluar() {
    if (operando1 == 0.0 && operando2 == 0.0) {
        hayError = true;
        mensajeError = "Error: 0 elevado a la 0 no está definido";
    } else {
        resultado = pow(operando1, operando2);
    }
}

string Potencia::serializar() {
    ostringstream flujo;

    if (hayError) {
        return mensajeError;
    } else {
        flujo << operando1 << " ** " << operando2 << " = " << resultado << endl;

        return flujo.str();
    }
}