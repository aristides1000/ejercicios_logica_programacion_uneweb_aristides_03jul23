/*
  3. Hacer una función que diga si en una cadena hay sólo dígitos.
*/

#include <stdio.h>
#include <string.h>

int main() {
  char cadena[100];
  int count = 0;

  printf("Digite una cadena: ");
  gets(cadena);

  for(int i = 0; i < strlen(cadena); i++) {
    if(cadena[i] >= '0' && cadena[i] <= '9') {
      count++;
    }
  }

  if(count == strlen(cadena)) {
    printf("La cadena %s tiene solo digitos", cadena);
  } else if(count > 0) {
    printf("La cadena %s tiene %d digitos", cadena, count);
  } else {
    printf("La cadena %s no tiene digitos", cadena);
  }

  return 0;
}
