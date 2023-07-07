/*
  2. Hacer una función que diga si un caracter está en una cadena.
*/

#include <stdio.h>
#include <string.h>

int main() {
  char cadena[100], caracter;
  int count = 0;

  printf("Digite una cadena: ");
  gets(cadena);

  printf("Digite un caracter: ");
  scanf("%c", &caracter);

  for(int i = 0; i < strlen(cadena); i++) {
    if(cadena[i] == caracter) {
      count++;
    }
  }

  if (count > 0) {
    printf("el caracter %c esta en la cadena %s\n", caracter, cadena);
  } else {
    printf("el caracter %c no se encuentra en la cadena %s\n", caracter, cadena);
  }
  

  return 0;
}