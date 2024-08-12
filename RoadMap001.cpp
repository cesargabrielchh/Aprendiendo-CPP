/*
 * EJERCICIO:
 * - Crea ejemplos utilizando todos los tipos de operadores de tu lenguaje:
 *   Aritméticos, lógicos, de comparación, asignación, identidad, pertenencia, bits...
 *   (Ten en cuenta que cada lenguaje puede poseer unos diferentes)
 * - Utilizando las operaciones con operadores que tú quieras, crea ejemplos
 *   que representen todos los tipos de estructuras de control que existan
 *   en tu lenguaje:
 *   Condicionales, iterativas, excepciones...
 * - Debes hacer print por consola del resultado de todos los ejemplos.
 *
 * DIFICULTAD EXTRA (opcional):
 * Crea un programa que imprima por consola todos los números comprendidos
 * entre 10 y 55 (incluidos), pares, y que no son ni el 16 ni múltiplos de 3.
 *
 * Seguro que al revisar detenidamente las posibilidades has descubierto algo nuevo.
 */

#include <iostream>

int main() {

    int a = 10, b = 5;

    //Suma
    std::cout << "Operación suma: " << a << " + " << b << " = " << a + b << std::endl;

    //Resta
    std::cout << "Operación sustracción: " << a << " - " << b << " = " << a - b << std::endl;

    //Multiplicación
    std::cout << "Operación multiplicación: " << a << " * " << b << " = " << a * b << std::endl;

    //División
    std::cout << "Operación división: " << a << " / " << b << " = " << a / b << std::endl;

    //Módulo
    std::cout << "Operación módulo: " << a << " % " << b << " = " << a % b << std::endl << std::endl;

    //Igualdad
    std::cout << "Igualdad: " << a << " == " << b << " : " << (a == b) << std::endl;

    //Desigualdad
    std::cout << "Desigualdad: " << a << " != " << b << " : " << (a != b) << std::endl;

    //Mayor que
    std::cout << "Mayor que: " << a << " > " << b << " : " << (a > b) << std::endl;

    //Menor que
    std::cout << "Menor que: " << a << " < " << b << " : " << (a < b) << std::endl;

    //Mayor o igual que
    std::cout << "Mayor o igual que: " << a << " >= " << b << " : " << (a >= b) << std::endl;

    //Menor o igual que
    std::cout << "Menor o igual que: " << a << " <= " << b << " : " << (a <= b) << std::endl << std::endl;

    bool x = true, y = false;

    std::cout << "x = " << x << ", y = " << y << std::endl;

    //AND
    std::cout << "Si 'x' y 'y' son verdaderas, se devuelve verdadero: " << (x && y) << std::endl;

    //OR
    std::cout << "Si 'x' o 'y' son verdaderas, se devuelve verdadero: " << (x || y) << std::endl;

    //NOT
    std::cout << "Si 'x' NO es verdadera, se devuelve verdadero: " << (!x) << std::endl << std::endl;

    //asignación de valores
    std::cout << "El valor de a es de: " << a << std::endl;

    a = a + 5; //Primera forma de sumar '5' a una variable
    std::cout << "Se aumenta 5 al valor de 'a' quedano en: " << a << std::endl;

    a += 7; //Segunda manera de sumar '7' a una variables
    std::cout << "Se aumenta 7 al valor de 'a' quedano en: " << a << std::endl;

    a -= 12; //Se resta '12' a la variable
    std::cout << "Se sustrae 12 al valor de 'a' quedano en: " << a << std::endl;

    a *= 2; //Se multiplica por '2' la variable
    std::cout << "Se multiplica por 2 el valor de 'a' quedano en: " << a << std::endl;

    a /= 2; //Se divide nuevamente entre '2' para regresar al valor inicial de 'a'
    std::cout << "Se divide entre 2 el valor de 'a' quedano en: " << a << std::endl << std::endl;

    /*
    Para los operadores bit a bit, tenemos los enteros a = 10 y b = 5 cuyos
    valores en binario son los siguientes:

    a = 10 decimal = 00001010 binario
    b = 05 decimal = 00000101 binario
    */

    /*
    El operador AND revisa bit a bit y si ambos son 1, devuelve 1, mientras
    que en el caso contrario, devuelve 0.

    a = 0 0 0 0 1 0 1 0
    b = 0 0 0 0 0 1 0 1
        0 0 0 0 0 0 0 0 => 00000000 binario = 0 decimal
    */
    std::cout << "Operador binario AND a & b : " << (a & b) << std::endl;

    /*
    El operador OR revisa bit a bit y si en un par hay aunque sea un 1,
    devuelve 1, y en el caso contrario, devuelve 0.

    a = 0 0 0 0 1 0 1 0
    b = 0 0 0 0 0 1 0 1
        0 0 0 0 1 1 1 1 => 00001111 binario = 15 decimal
    */
   std::cout << "Operador binario OR a | b : " << (a | b) << std::endl;

    /*
    El operador XOR revisa bit a bit y si son diferentes, devuelve 1.
    Caso contrario devuelve 0.

    a = 0 0 0 0 1 0 1 0
    b = 0 0 0 0 0 1 0 1
        0 0 0 0 1 1 1 1 => 00001111 binario = 15 decimal
    */
   std::cout << "Operador binario XOR a ^ b : " << (a ^ b) << std::endl;

    /*
    El operador NOT invierte los bits de un número. Si el bit era un 1
    regresa un 0 y viceversa.

     a = 0 0 0 0 1 0 1 0
    ^a = 1 1 1 1 0 1 0 1 => 11110101 binario = -11 decimal (para negativos se aplica el 'complemento a 2')
    */
    std::cout << "Operador binario NOT ~ a : " << (~ a) << std::endl;

    /*
    Desplazamiento a la izquierda desplaza los bits de un número a la izquierda
    un determinado número de lugares:

         a = 0 0 0 0 1 0 1 0
    a << 2 = 0 0 1 0 1 0 0 0 => 00101000 binario = 40 decimal (se desplazaron los bits 2 lugares a la izquierda)
    */
    std::cout << "Operador binario desplazar a la izquierda << a : " << (a << 2) << std::endl;

    /*
    Desplazamiento a la derecha desplaza los bits de un número a la derecha
    un determinado número de lugares:

         a = 0 0 0 0 1 0 1 0
    a >> 2 = 0 0 0 0 0 0 1 0 => 00000010 binario = 2 decimal (se desplazaron los bits 2 lugares a la derecha)
    */
    std::cout << "Operador binario desplazar a la izquierda << a : " << (a >> 2) << std::endl;

    // Estructura de control IF
    if (a == 10) {
        std::cout << "La variable a tiene un valor de 10" << std::endl;
    }

    // Estrucutra de control IF-ELSE
    if (b > 5) {
        std::cout << "b es mayor que 5" << std::endl;
    } else {
        std::cout << "b no es mayor que 5" << std::endl;
    }

    // Estructura de control Switch
    short numberToLetter = 4;

    switch (numberToLetter) {
        case 1:
            std::cout << "La letra número " << numberToLetter << " corresponde a la letra A" << std::endl;
            break;
        case 2:
            std::cout << "La letra número " << numberToLetter << " corresponde a la letra B" << std::endl;
            break;
        case 3:
            std::cout << "La letra número " << numberToLetter << " corresponde a la letra C" << std::endl;
            break;
        case 4:
            std::cout << "La letra número " << numberToLetter << " corresponde a la letra D" << std::endl;
            break;
        case 5:
            std::cout << "La letra número " << numberToLetter << " corresponde a la letra E" << std::endl;
            break;
        default:
            std::cout << "La letra no se encuentra en la lista.";
            break;
    }

    // Estructura de control While
    numberToLetter = 1;
    int counter = 1;

    while (numberToLetter < 100) {
        numberToLetter = numberToLetter + numberToLetter;
        counter += 1;
    }
    std::cout << "Si el número 1 lo duplicas " << counter << " veces logrará superar el número 100" << std::endl;

    // Estructura de control DO-WHILE
    numberToLetter = 1;
    counter = 1;

    do {
        numberToLetter = numberToLetter + numberToLetter;
        counter += 1;
    } while (numberToLetter <= 100); //Es igual que el While, pero aquí se ejecuta por lo menos una sola vez
    std::cout << "Si el número 1 lo duplicas " << counter << " veces logrará superar el número 100" << std::endl;

    // Estructura de control FOR
    std::cout << "Contemos del 1 al 10: " << std::endl;
    for (int i = 1; i <= 10; i++) {
        std::cout << i << std::endl;
    }
}