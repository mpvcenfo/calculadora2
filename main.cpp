// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: main.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "Calculadora.h"
#include "TipoOperacion.h"

using namespace std;

void mostrarMenu();

int leerOpcion();

bool evaluarOpcion(int&);

double leerOperando();

void realizarOperacion(TipoOperacion&);

void mostrarHistorial();

void borrarPantalla();

int main() {
    bool salir = false;
    int opcion;

    Calculadora::iniciar();

    while (!salir) {
        mostrarMenu();
        opcion = leerOpcion();
        salir = evaluarOpcion(opcion);
    }

    return 0;
}

void mostrarMenu() {
    cout << "Menú de calculadora:" << endl
         << "1. Sumar" << endl
         << "2. Restar" << endl
         << "3. Multiplicar" << endl
         << "4. Dividir" << endl
         << "5. Calcular módulo" << endl
         << "6. Calcular potencia" << endl
         << "7. Calcular raíz cuadrada" << endl
         << "8. Mostrar historial de operaciones" << endl
         << "9. Borrar pantalla" << endl
         << "0. Salir" << endl
         << "----" << endl
         << "Opción: ";
}

int leerOpcion() {
    string entrada;
    int opcion;

    cin >> entrada;

    try {
        opcion = stoi(entrada);
    } catch (invalid_argument& argumento) {
        cout << "Entrada inválida: " << argumento.what() << endl;
    }

    return opcion;
}

double leerOperando() {
    string entrada;
    double operando;

    cin >> entrada;

    try {
        operando = stod(entrada);
    } catch (invalid_argument& argumento) {
        cout << "Operando inválido: " << argumento.what() << endl;
    }

    return operando;
}

bool evaluarOpcion(int& opcion) {
    bool salir = false;
    TipoOperacion tipoOp = TipoOperacion(opcion);

    switch (opcion) {
        case 0:
            salir = true;
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            realizarOperacion(tipoOp);
            break;
        case 8:
            mostrarHistorial();
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

void realizarOperacion(TipoOperacion& tipoOp) {
    double op1, op2;

    if (tipoOp == tipoRaiz) {
        cout << "Operando: ";
        op1 = leerOperando();
        op2 = 0.0;
    } else {
        cout << "Primer operando: ";
        op1 = leerOperando();
        cout << "Segundo operando: ";
        op2 = leerOperando();
    }

    cout << "Resultado: " << Calculadora::evaluar(tipoOp, op1, op2) << endl;
}

void mostrarHistorial() {
    cout << "Las últimas 3 operaciones realizadas son: " << endl
         << Calculadora::obtenerHistorial() << endl;
}

void borrarPantalla() {
#ifdef WINDOWS
    system("cls");
#else
    system("clear");
#endif

    cout << flush;

    Calculadora::terminar();
    Calculadora::iniciar();
}