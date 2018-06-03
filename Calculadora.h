// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: Calculadora.h
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <string>
#include <vector>
#include "Division.h"
#include "Modulo.h"
#include "Multiplicacion.h"
#include "Operacion.h"
#include "Potencia.h"
#include "Raiz.h"
#include "Resta.h"
#include "Suma.h"
#include "TipoOperacion.h"

using namespace std;

class Calculadora {
   //private:
   // static vector<Operacion*>* historial;

   public:
    static string evaluar(TipoOperacion, double, double);
    static string obtenerHistorial();
};

#endif  // CALCULADORA_H
