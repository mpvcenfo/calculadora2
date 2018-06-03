// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Calculadora.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Calculadora.h"

string Calculadora::evaluar(TipoOperacion tipoOp, double op1, double op2) {
    Operacion* op;
    string mensajeRespuesta;

    switch (tipoOp) {
        case tipoSuma:
            op = new Suma(op1, op2);
            break;
        case tipoResta:
            op = new Resta(op1, op2);
            break;
        case tipoMultiplicacion:
            op = new Multiplicacion(op1, op2);
            break;
        case tipoDivision:
            op = new Division(op1, op2);
            break;
        case tipoModulo:
            op = new Modulo(op1, op2);
            break;
        case tipoPotencia:
            op = new Potencia(op1, op2);
            break;
        case tipoRaiz:
            op = new Raiz(op1, op2);
            break;
    }

    op->evaluar();

    mensajeRespuesta = op->serializar();

    // historial.push_back(op);

    return mensajeRespuesta;
}

string Calculadora::obtenerHistorial() {
    string listadoHistorial = "";

    // for (Operacion* op : historial) {
    //     listadoHistorial += op->serializar() + '\n';
    // }

    return listadoHistorial;
}