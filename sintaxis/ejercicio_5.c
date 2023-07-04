#include <stdio.h>

int main() {
  // generación de nuevas lineas

  /*
    Consejo: dos caracteres de escape uno después del otro crearan una línea en blanco.
  */
  printf("Hola mundo\n\n");
  printf("Estoy aprendiendo lenguaje C.");
  return 0;
  /*
    ¿Qué es \n exactamente?

    El caracter de nueva linea (\n) se denomina secuencia de escape y obliga al cursor a cambiar su posición al comienzo de la siguiente línea en la pantalla. Esto da como resultadouna nueva línea.
  */
}