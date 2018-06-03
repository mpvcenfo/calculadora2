// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Calculadora.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include "Calculadora.h"

vector<Operacion*> Calculadora::historial;

void Calculadora::iniciar() { historial = vector<Operacion*>(); }

void Calculadora::terminar() {
    for(Operacion* op: historial) {
        delete op;
    }
}

string Calculadora::evaluar(TipoOperacion& tipoOp, double& op1, double& op2) {
    Operacion* op;
    string respuesta;

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
    respuesta = op->serializar();

    historial.push_back(op);

    return respuesta;
}

string Calculadora::obtenerHistorial() {
    int i = 0;
    vector<Operacion*>::reverse_iterator iter = historial.rbegin();
    string listadoHistorial = "";

    for (; i < 3 && iter != historial.rend(); iter++, i++) {
        listadoHistorial += (*iter)->serializar();
    }

    return listadoHistorial;
}