/*
 * EJERCICIO:
 * - Crea un comentario en el código y coloca la URL del sitio web oficial del
 *   lenguaje de programación que has seleccionado.
 * - Representa las diferentes sintaxis que existen de crear comentarios
 *   en el lenguaje (en una línea, varias...).
 * - Crea una variable (y una constante si el lenguaje lo soporta).
 * - Crea variables representando todos los tipos de datos primitivos
 *   del lenguaje (cadenas de texto, enteros, booleanos...).
 * - Imprime por terminal el texto: "¡Hola, [y el nombre de tu lenguaje]!"
 */

// Sitio web oficial de C++: https://isocpp.org/

// Este es un comentario de una línea

/*
Este es un comentario
que ocupará varias líneas
*/

//Variables y tipos de datos
#include <iostream>

int main() {

    /*
    Char puede almacenar un único caracter y ocupa 1 byte en la memoria
    (8 bits), por lo que admite 2^8 = 256 valores (desde -128 a 127).
    */
    char singleLetter = 'C';

    /*
    Short almacena números enteros y ocupa 2 bytes (16 bits), por lo que
    admite un total de 2^16 = 65,536 valores (desde -32,768 a 32,767).
    */
   short universitiesInWorld = 32000;

    /*
    Int almacena números enteros con una mayor capacidad que short, ocupando
    4 bytes en la memoria (32 bits), por lo que admite 2^32 = 4,294,967,296
    valores diferentes que van desde -2,147,483,648 hasta 2,147,483,647.
    */
    int largeNumber = 123456;

    /*
    Long almacena números enteros con un espacio en memoria de 8 bytes (64 bits)
    por lo que puede almacenar 18,446,744,073,709,551,616 valores diferentes que
    van desde -9,223,372,036,854,775,808 hasta 9,223,372,036,854,775,807.
    */
    long veryLargeNumber = 123456789;

    /*
    Float tiene la capacidad de almacenar números con decimales ocupando 4 bytes
    en la memoria. Sus valores van desde aproximadamente van desde ±3.4 x 10^-38
    a ±3.4 x 10^38
    */
    float stature = 1.83;

    /*
    Double es una variable que almacena número con decimales a doble precisión,
    es más preciso que float pero ocupa 8 bytes en la memoria (64 bits) y sus
    valores van desde aproximadamente ±1.7 x 10^-308 a ±1.7 x 10^308
    */
    double bigNumberDecimal = 123564815.4569871;

    /*
    Bool almacena un valor de solamente 1 bit (0.125 bytes) ya que solamente
    puede tener dos valores: Verdadero o Falso (1 y 0).
    */
    bool isStudent = true;

    /*
    Para crear una constante, basta con agregar un "const" antes de declarar el
    tipo de la variable.
    */
    const int short AGE = 33;

    /*
    Es posible agregar "unsigned" antes de la variable para indicar que solamente
    se almacenarán números sin signo (positivos), por lo que por ejemplo, en el
    caso de Short que tiene la capacidad de almacenar 2^16 = 65,536 valores que
    van desde -32,768 a 32,767 al agregar el "unsigned" el rango de valores que
    podrá almacenar será desde 0 a 65,535
    */
   unsigned short unsignedNumber = 54321;

    /*
    Otro tipo de variables como String no se consideran variables primitivas
    como las anteriores. Para almacenar un String, es necesario usar la clase
    String de la biblioteca estándar, que permite encapsular un arreglo de
    caracteres para facilitar su manipulación.
    */
   std::string name = "César";

   //Imprimir por pantalla de consola
   std::cout << "Hola, mi nombre es " + name << std::endl;

}