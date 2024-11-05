//
// Created by canas on 05/11/2024.
//

#include "promocion.h"

#include <iostream>


using namespace std;

// Implementación de la función que calcula el total a pagar bajo la promoción
double calcularTotalConPromocion(double precio1, double precio2, double precio3) {
    // Encontrar el artículo más barato
    double precioMinimo = precio1;

    if (precio2 < precioMinimo) {
        precioMinimo = precio2;
    }
    if (precio3 < precioMinimo) {
        precioMinimo = precio3;
    }

    // Sumar los precios de los dos artículos más caros (descontando el más barato)
    return (precio1 + precio2 + precio3) - precioMinimo;
}
