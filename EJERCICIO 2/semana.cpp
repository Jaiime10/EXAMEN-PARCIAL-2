//
// Created by canas on 05/11/2024.
//

#include "semana.h"
#include <iostream>
using namespace std;

int main() {
    int dia;

    // Solicitar al usuario que ingrese un número entre 1 y 7
    cout << "Ingresa un número del 1 al 7: ";
    cin >> dia;

    // Imprimir el nombre del día correspondiente
    switch (dia) {
        case 1:
            cout << "Lunes" << endl;
        break;
        case 2:
            cout << "Martes" << endl;
        break;
        case 3:
            cout << "Miércoles" << endl;
        break;
        case 4:
            cout << "Jueves" << endl;
        break;
        case 5:
            cout << "Viernes" << endl;
        break;
        case 6:
            cout << "Sábado" << endl;
        break;
        case 7:
            cout << "Domingo" << endl;
        break;
        default:
            cout << "Número no válido. Ingresa un número entre 1 y 7." << endl;
    }

    return 0;
}

