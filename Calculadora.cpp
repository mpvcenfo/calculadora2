// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Calculadora.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Calculadora.h"

vector<Operacion> Calculadora::historial;

void Calculadora::iniciar() {}

void Calculadora::terminar() {}

string Calculadora::evaluar(TipoOperacion tipoOp, double op1, double op2) {
    Operacion op;
    string mensajeRespuesta;

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

    mensajeRespuesta = op.serializar();

    historial.push_back(op);

    return mensajeRespuesta;
}

string Calculadora::obtenerHistorial() {
    string listadoHistorial = "";

    for (Operacion op : historial) {
        listadoHistorial += op.serializar() + '\n';
    }

    return listadoHistorial;
}