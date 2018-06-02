// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Calculadora.h
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#ifndef CALCULADORA_CALCULADORA_H
#define CALCULADORA_CALCULADORA_H

#include <string>
#include <vector>
#include "Operacion.h"

using namespace std;

class Calculadora {
private:
    static Operacion* operacionActual;
    static vector<Operacion>* historial;

public:
    static void iniciar();
    static void terminar();
    static string sumar(double, double);
    static string restar(double, double);
    static string multiplicar(double, double);
    static string dividir(double, double);
    static string calcularModulo(double, double);
    static string calcularPotencia(double, double);
    static string calcularRaiz(double);
    static string obtenerHistorial();
};


#endif //CALCULADORA_CALCULADORA_H
