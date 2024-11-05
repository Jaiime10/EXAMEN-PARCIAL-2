//
// Created by canas on 05/11/2024.
//

#include "numeros.h"
#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número entero
    cout << "Ingresa un número entero: ";
    cin >> numero;

    // Analizar el número ingresado y determinar si es positivo, negativo o cero
    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else if (numero < 0) {
        cout << "El número es negativo." << endl;
    } else {
        cout << "El número es cero." << endl;
    }

    return 0;
}

