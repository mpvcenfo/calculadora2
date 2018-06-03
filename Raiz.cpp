// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Raiz.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Raiz.h"
#include <cmath>
#include <sstream>

void Raiz::evaluar() {
    if (operando1 < 0.0) {
        hayError = true;
        mensajeError = "Error: no existe raíz real de número negativo";
    } else {
        resultado = sqrt(operando1);
    }
}

string Raiz::serializar() {
    ostringstream flujo;

    if (hayError) {
        return mensajeError;
    } else {
        flujo << "La raíz cuadrada de " << operando1 << " es " << resultado
              << endl;

        return flujo.str();
    }
}