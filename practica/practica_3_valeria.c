/*
  3. Hacer una función que diga si en una cadena hay sólo dígitos.
*/

/*
  OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO

  Instalar la extención Compile Run, de C/C++;

  OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO OJO
*/

#include <stdio.h>
#include <string.h>

int intentos = 0;

int isNumber(char varchar[100], int count) {
  int i = 0;
  count = 0;
  size_t length = strlen(varchar);

  /*
    Cómo se puede corregir el mensaje de: "warning: comparison of integer expressions of different signedness: 'int' and 'size_t' {aka 'long long unsigned int'} [-Wsign-compare]"

    El warning que aparecía se produce cuando se comparan expresiones enteras de diferentes signos. En este caso, el warning se produce porque se está comparando un entero “int” con un tamaño “size_t” que es un entero sin signo.

    Para corregir este warning, puede convertir el entero “int” a un tamaño “size_t” utilizando una conversión explícita. Por ejemplo:

    int i = 0;
    size_t len = strlen(cadena);

    if (i < (int)len) {
      // ...
    }

    En este ejemplo, la variable “len” es de tipo “size_t”, que es un entero sin signo. La variable “i” es de tipo “int”. Para comparar estas dos variables sin generar un warning, se utiliza una conversión explícita para convertir la variable “len” en un entero “int”.

    La expresión “(int)len” es una conversión explícita de la variable “len” de tipo “size_t” a un entero “int”. Esta conversión se utiliza para comparar la variable “len” con otra variable de tipo “int” sin generar un warning.

    ¿qué es una conversión explísita?

    En C y C++, una conversión explícita es una conversión de un tipo de datos a otro que se realiza de manera explícita en el código fuente. Esto se hace utilizando una sintaxis especial para indicar al compilador que se desea realizar la conversión.

    Por ejemplo, en el código que compartiste, la expresión “(int)len” es una conversión explícita de la variable “len” de tipo “size_t” a un entero “int”. Esto se hace para comparar la variable “len” con otra variable de tipo “int” sin generar un warning.
  */

  while(i < (int)length) {
    if(varchar[i] >= '0' && varchar[i] <= '9') {
      count++;
    }
    i++;
  }

  return count;
}

int main() {
  /* int p, num;

  printf("Ingrese un numero:\n");

  while (scanf("%d", &p) == 1) {
    if (p) {
      printf("Es un numero");
    } else {
      printf("Escriba un número, por favor:", p);
    }
  }

  printf("Es un numero"); */

  char cadena[100];
  int contador = 0;

  if (intentos < 1) {
    printf("Digite un numero: ");
  } else {
    printf("Por favor, ingrese nuevamente un numero: ");
  }

  gets(cadena);

  contador = isNumber(cadena, contador);

  size_t length = strlen(cadena);

  if(contador == (int)length) {
    printf("El dato %s, es un numero", cadena);
  } else {
    printf("El dato %s que ingreso no es un numero. ", cadena);
    intentos++;
    main();
  }

  return 0;
}
