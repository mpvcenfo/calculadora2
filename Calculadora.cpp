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

string Calculadora::evaluar(TipoOperacion tipoOp, double op1, double op2) {
    Operacion op;

    switch (tipoOp) {
        case tipoSuma:
            op = Suma(op1, op2);
            break;
        case tipoResta:
            op = Resta(op1, op2);
            break;
        case tipoMultiplicacion:
            op = Multiplicacion(op1, op2);
            break;
        case tipoDivision:
            op = Division(op1, op2);
            break;
        case tipoModulo:
            op = Modulo(op1, op2);
            break;
        case tipoPotencia:
            op = Potencia(op1, op2);
            break;
        case tipoRaiz:
            op = Raiz(op1, op2);
            break;
        default:
            op = Operacion(op1, op2);
            break;
    }

    op.evaluar();

    historial.push(op);

    return op.serializar();
}