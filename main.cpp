// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: main.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include <iostream>
#include <string>
#include <vector>
#include "Calculadora.h"

using namespace std;

int leerOpcion();

bool evaluarOpcion(int);

double leerOperando();

void borrarPantalla();

int main() {
    bool salir = false;
    int opcion;

    Calculadora::iniciar();

    while (!salir) {
        opcion = leerOpcion();
        salir = evaluarOpcion(opcion);
    }

    Calculadora::terminar();

    return 0;
}

int leerOpcion() {
    string entrada;
    int opcion;

    cout << "Menú de calculadora"
         << "1. Sumar" << endl
         << "2. Restar" << endl
         << "3. Multiplicar" << endl
         << "4. Dividir" << endl
         << "5. Calcular módulo" << endl
         << "6. Calcular potencia" << endl
         << "7. Calcular raíz cuadrada" << endl
         << "8. Mostrar historial de operaciones" << endl
         << "9. Borrar pantalla" << endl
         << "----" << endl
         << "Opción: ";
    cin >> entrada;

    try {
        opcion = stoi(entrada);
    } catch (const invalid_argument &argumento) {
        cout << "Entrada inválida: " << argumento.what() << endl;
    }

    return opcion;
}

double leerOperando() {
    string entrada;
    double operando;

    cout << "Operando: ";
    cin >> entrada;

    try {
        operando = stod(entrada);
    } catch (invalid_argument &argumento) {
        cout << "Operando inválido: " << argumento.what() << endl;
    }

    return operando;
}

bool evaluarOpcion(int opcion) {
    bool salir = false;
    double operando1, operando2;

    if (opcion == 7) {
        operando1 = leerOperando();
    } else {
        operando1 = leerOperando();
        operando2 = leerOperando();
    }

    switch (opcion) {
        case 0:
            salir = true;
            break;
        case 1:
            cout << "Resultado: " << Calculadora::sumar(operando1, operando2)
                 << endl;
            break;
        case 2:
            cout << "Resultado: " << Calculadora::restar(operando1, operando2)
                 << endl;
            break;
        case 3:
            cout << "Resultado: "
                 << Calculadora::multiplicar(operando1, operando2) << endl;
            break;
        case 4:
            cout << "Resultado: " << Calculadora::dividir(operando1, operando2)
                 << endl;
            break;
        case 5:
            cout << "Resultado: "
                 << Calculadora::calcularModulo(operando1, operando2) << endl;
            break;
        case 6:
            cout << "Resultado: "
                 << Calculadora::calcularPotencia(operando1, operando2) << endl;
            break;
        case 7:
            cout << "Resultado: " << Calculadora::calcularRaiz(operando1)
                 << endl;
            break;
        case 8:
            cout << "Historial de operaciones:" << endl
                 << Calculadora::obtenerHistorial() << endl;
            break;
        case 9:
            borrarPantalla();
            break;
        default:
            cout << "Opción inválida" << endl;
            break;
    }

    return salir;
}

void borrarPantalla() {}