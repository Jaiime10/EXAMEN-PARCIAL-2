//
// Created by canas on 05/11/2024.
//

#include "calificaciones.h"

#include <iostream>


using namespace std;

// Implementación de la función para calcular el promedio
double calcularPromedio(int calificaciones[], int cantidad) {
    int suma = 0;

    // Sumar todas las calificaciones
    for (int i = 0; i < cantidad; i++) {
        suma += calificaciones[i];
    }

    // Calcular y devolver el promedio
    return static_cast<double>(suma) / cantidad;
}
