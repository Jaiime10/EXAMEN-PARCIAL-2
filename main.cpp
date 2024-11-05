//
// Created by canas on 05/11/2024.
//

#include "main.h"
#include <iostream>
 // Incluir el archivo de encabezado con las declaraciones de las funciones

using namespace std;

int main() {
    // Ejercicio 1: Identificación de Número Positivo, Negativo o Cero
    int numero;
    cout << "Ejercicio 1: Identificación de Número Positivo, Negativo o Cero" << endl;
    cout << "Ingresa un número entero: ";
    cin >> numero;
    analizarNumero(numero);  // Llamamos a la función del Ejercicio 1
    cout << endl;

    // Ejercicio 2: Día de la Semana
    int dia;
    cout << "Ejercicio 2: Día de la Semana" << endl;
    cout << "Ingresa un número entre 1 y 7: ";
    cin >> dia;
    mostrarDiaSemana(dia);  // Llamamos a la función del Ejercicio 2
    cout << endl;

    // Ejercicio 3: Cálculo de Promedio de Calificaciones
    int calificaciones[8];
    cout << "Ejercicio 3: Cálculo de Promedio de Calificaciones" << endl;
    cout << "Ingresa las calificaciones de los 8 ejercicios (de 0 a 10):" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "Calificación del ejercicio " << (i + 1) << ": ";
        cin >> calificaciones[i];
    }
    double promedio = calcularPromedio(calificaciones, 8);  // Llamamos a la función del Ejercicio 3
    cout << "El promedio de las calificaciones es: " << promedio << endl;
    cout << endl;

    // Ejercicio 4: Promoción de "3 por 2" en Tienda
    double precio1, precio2, precio3;
    cout << "Ejercicio 4: Promoción de '3 por 2' en Tienda" << endl;
    cout << "Ingresa el precio del primer artículo: ";
    cin >> precio1;
    cout << "Ingresa el precio del segundo artículo: ";
    cin >> precio2;
    cout << "Ingresa el precio del tercer artículo: ";
    cin >> precio3;
    double total = calcularTotalConPromocion(precio1, precio2, precio3);  // Llamamos a la función del Ejercicio 4
    cout << "El total a pagar por los tres artículos es: " << total << endl;

    return 0;
}


