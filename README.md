# LINK DEL REPOSITORIO

https://github.com/Jaiime10/EXAMEN-PARCIAL-2/new/main?readme=1

# Parte 2: Problemas de Codificación (70 puntos en total)

## Ejercicio 1: Identificación de Número Positivo, Negativo o Cero

Escribe un programa en C++ que solicite al usuario ingresar un número entero. El programa deberá analizar el número ingresado e imprimir en pantalla si el número es **"positivo"**, **"negativo"** o **"cero"**.

Utilizamos `cin` para pedir al usuario que ingrese un número entero. Usamos las condicionales tal que:

- Si el número es mayor que cero (`numero > 0`), el programa imprime **"El número es positivo"**.
- Si el número es menor que cero (`numero < 0`), imprime **"El número es negativo"**.
- Si el número es igual a cero (`numero == 0`), imprime **"El número es cero"**.
- 
FUENTE USADA: CHAT GPT
---

## Ejercicio 2: Día de la Semana

Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del **día de la semana** correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo).

### Entrada del número

El programa solicita al usuario ingresar un número entre 1 y 7, utilizando `cin`.

### Estructura `switch`

Utilizamos una instrucción `switch` para verificar el número ingresado:

- Si el número es 1, el programa imprime **"Lunes"**.
- Si el número es 2, imprime **"Martes"**, y así sucesivamente hasta el número 7, que imprime **"Domingo"**.

### Caso por defecto

Si el usuario ingresa un número fuera del rango 1-7, el programa muestra un mensaje indicando que el número no es válido.

FUENTE USADA: CHAT GPT


---

## Ejercicio 3: Cálculo de Promedio de Calificaciones

Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el **promedio** de las calificaciones.

### `int suma = 0;`

Creamos una variable para acumular la suma de las calificaciones.

### Bucle `for`

Iteramos a través del arreglo de calificaciones y sumamos cada una.

### `static_cast<double>(suma)`

Usamos `static_cast` para asegurarnos de que la división sea precisa (es decir, no sea truncada a un valor entero).

Finalmente, devolvemos el promedio como un valor de tipo `double`.

FUENTE USADA: CHAT GPT

---

## Ejercicio 4: Promoción de "3 por 2" en Tienda

En una tienda se está ofreciendo una **promoción** en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los **precios** de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.

### Función `calcularTotalConPromocion`

La función `calcularTotalConPromocion` toma tres precios y calcula el total a pagar por el cliente, considerando que el más barato no se paga.

1. Primero, encontramos el precio mínimo entre los tres artículos.
2. Luego, sumamos todos los precios y le restamos el precio mínimo (el más barato) para obtener el total a pagar.


FUENTE USADA: CHAT GPT
