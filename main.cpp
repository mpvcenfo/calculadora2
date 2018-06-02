// Universidad Cenfotec
// Estructura de datos 1 - 2018-01
// Nombre de archivo: main.cpp
// Autor: Marco Piedra Venegas (mpiedrav@ucenfotec.ac.cr)
// TAD calculadora - Tarea 2
// Fecha de creación: 26-05-2018
// Fecha de modificación: 02-06-2018

#include <iostream>
#include <string>
#include "Calculadora.h"

using namespace std;

int leerOpcion();

bool evaluarOpcion(int);

double leerOperando(int);

void evaluarOperacion(int);

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
    }
    catch (const invalid_argument &argumento) {
        cout << "Entrada inválida: " << argumento.what() << endl;
    }

    return opcion;
}

bool evaluarOpcion(int opcion) {
    bool salir = false;

    switch (opcion) {
        case 0:
            salir = true;
            break;
        case 1:
            sumar();
            break;
        case 2:
            restar();
            break;
        case 3:
            multiplicar();
            break;
        case 4:
            dividir();
            break;
        case 5:
            calcularModulo();
            break;
        case 6:
            calcularPotencia();
            break;
        case 7:
            calcularRaiz();
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

void sumar() {
    string entrada;
    double operando1, operando2;

    operando1 = leerOperando(1);
    operando2 = leerOperando(2);
    cout << "Resultado: " << Calculadora::sumar(operando1, operando1) << endl;
}

double leerOperando(int numeroOperando) {
    string entrada = "";
    double operando = 0.0;

    switch(numeroOperando){
        case 1:
            cout << "Primer operando: ";
            break;
        case 2:
            cout << "Segundo operando: ";
            break;
        default:
            cout << "Operando: ";
            break;
    }
    cin >> entrada;

    try {
        operando = stod(entrada);
    }
    catch (invalid_argument &argumento) {
        cout << "Operando inválido: " << argumento.what() << endl;
    }

    return operando;
}

void borrarPantalla() {

}