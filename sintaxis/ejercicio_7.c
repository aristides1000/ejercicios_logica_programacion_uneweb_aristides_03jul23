#include <stdio.h>

int main() {
  // Variables en el Lenguaje C

  /*
    Las variables son contenedores para almacenar valores de datos, como números y caractéres.

    En C, hay diferentestipos de variable(definidascon diferentes palabras clave), por ejemplo:

      - int - almacena enteros (números enteros), sin decimales, como 123 o -123

      - float - almacena números de coma flotante, con decimales, como el 19.99 o -19.99

      - char -Almacena caractéres individuales. como 'a' o 'B'. Los valores de char están entre comillas simples.

      Declarar (crear) variables

      Para crear una variable, especifique el tipo y asígnele un valor:

      "type variableName = value";

      Donde type es uno de los tipo de variables de C (como int) y variableName es el nombre de la variable (como x o myName). el signo igual se utiliza para asignar un valor a la variable.

      creemos una variable que almacee el valor de un número
  */

  int myNum = 15;

  // tambien se puede declarar una variable sin asignar eñ valor y asignarlo màs tarde, ejemplo:

  // Declaramos la variable
  int myNumDos;

  // Asignamos el valor de la variable
  myNumDos = 20;

  /*
    int myNumTres = 25;

    printf(myNumTres); Nada va a pasar

    Para generar la impresión de variables en C, debemos familiarizarnos con algo llamado "Especificadores de formato".
  */

  // especificadores de formato

  /*
    Los especificadores de formato se usan junto con la función "printf()" para decirle al compilador qué tipo de datos está almacenando la variable. Es básicamente un marcador de posición para el valor de la variable.

    Un especificador de formato comienza con un signo de porcentaje "%", seguido de un caracter.

    por ejemplo, para generar el valor de una variable de tipo int, se debe usar el especificador de formato %d o %i, estos deben estar entre comillas dobles dentro de la función printf();
  */

  int myNumCuatro = 30;
  printf("%d", myNumCuatro); // va a tener como salida 30

  /*
    Para imprimir otros tipos, use "%c" para tipos de datos "char" y "%f" para tipos de datos float.
  */

  int myNumCinco = 30;

  float myFloatNum = 7.89;

  char myLetter = 'S';

  //imprimir variables

  printf("%d\n", myNumCinco);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);

  /*
    Para combinar texto y una variable, sepárelos con una coma dentro de la función "printf()":
  */

  int myNumSeis = 35;
  printf("Mi numero favorito es el: %d\n", myNumSeis);

  /*
    Para imprimir diferentes tipos en una sola función "printf()", se puede usar lo siguiente
  */

  int myNumSiete = 40;
  char myLetterDos = 'X';
  printf("My numero es el %d y mi letra es la %c", myNumSiete, myLetterDos);

  /*
    Cambiar los valores de las variables

    Nota: Si asigna un nuevo valor a una variable existente, sobrescribirá el valor anterior. Ejemplo:
  */

  int myNumOcho = 45; // myNumOcho es 45;
  myNumOcho = 7; // myNumOcho ahora es 7;

  /*
    También se puede asignar el valor de una variable a otra: ejemplo
  */

  int myNumNueve = 50;
  int myOtroNum = 12;

  //Asignamos el valor de "myOtroNum" (12) a "myNumNueve"

  myNumNueve = myOtroNum;

  // myNumNueve es ahora 12 en lugar de 50;

  /*
    o copiar valores a variables vacías
  */

  // Creamos una variable y le asignamos el valor de 16.

  int myNumDiez = 55;

  //Declaramos una variable sin asignarle un valor

  int myOtroNumDos;

  //asignamos el valor de "myNumDiez" a "myOtroNumDos"

  myOtroNumDos = myNumDiez;

  //Ahora "myOtroNumDos" tiene un valor de 55;

  printf("%d", myOtroNumDos);

  // Agregar variables juntas

  /*
    Para agregar una variable a otra, se puede usar el operador "+". Ejemplo:
  */

  int x = 7;
  int y = 4;
  int sum = x + y;
  printf("%d\n", sum);

  // Declarar múltiples variables

  /*
    Para declarar múltiples variables del mismo tipo, se debe utilizar una lista separada por comas:
  */

  int z = 8, q = 4, p = 10;
  printf("%d", z + q + p);

  /*
    También se puede asignar el mismo valor a múltiples variables del mismo tipo
  */

  int w, e, r;
  w = e = r = 24;
  printf("%d", w + e + r);

  // Nombres de variables

  /*
    Todas las variables de C deben identificarse con nombres exclusivos.

    Estos nombres únicos se denominan "identificadores".

    Los identificadores pueden ser nombres cortos (como x e y) o nombres más descriptivos (edad, suma, volumenTotal).

    Nota: se recomienda utilizar nombres descriptivos para crear un código comprensible y mantenible:
  */

  // Buen nombre

  int minutosPorHora = 60;

  // Bien, pero es dificil comprender que signifa la variable de nombre m.

  int m = 60;

  /*
    Las reglas generales para nombrar variables son:

      - Los nombres pueden contener letras, dígitos y guiónes bajos.

      - Los nombres deben comenzar con una letra o guión bajo (_).

      - Los nombres distinguen entre mayúsculas y minúsculas ("myVar" y "myvar" son variables diferentes).

      - Los nombres no pueden contener espacios en blanco ni caractéres especiales como !, #, %, etc.

      - Las palabras reservadas (como int) no se pueden usar como nombres.
  */

  // Ejemplos de la vida real

  /*
    A menudo se simplifican los nombres de las variables para que coincidan con su tipo de datos (myInt o myNum para tipos int, myChar para tipo char, etc). Esto se hace para evitar confuciones.

     Sin embargo si deseamos un ejemplo de la vida real sobre cómo se pueden usar las variables , echemos unvistaso a lo siguiente, donde hemos creado un programa que almacena diferentes datos de un estudiante universitario
  */

  // Datos del estudiante

  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.25;
  char studentGrade = 'B';

  //impresiòn de variables:

  printf("Student ID: %d\n", studentID);
  printf("Student age: %d\n", studentAge);
  printf("Student fee: %f\n", studentFee);
  printf("Student grade: %c\n", studentGrade);

  return 0;
}
