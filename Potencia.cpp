//
// Created by Marco Piedra Venegas on 6/2/18.
//

#include "Potencia.h"

Potencia::Potencia() {
    Operacion::Operacion();
}

Potencia::Potencia(double op1, double op2) {
        Operacion::Operacion(op1, op2);
}

Potencia::~Potencia() {
    Operacion::~Operacion();
}

void Potencia::evaluar() {
    if(operando1 == 0.0 && operando2 == 0.0) {
        hayError = true;
        mensajeError = "Error: 0 elevado a la 0 no está definido";
    }
    else {
        resultado = pow(operando1, operando2);
    }
}