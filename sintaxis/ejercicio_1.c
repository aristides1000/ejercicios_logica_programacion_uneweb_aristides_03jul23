#include <stdio.h>
/*
  #include <stdio.h> es una biblioteca de archivos de encabezado que nos permite trabajar con funciones de entrada y salida, como "printf()" (que se utiliza más adelante). Los archivos de encabezado agregan funcionalidad a los programas C.

  NOTA: No se preocupe si no entiende como #include <stdio.h> funciona. Piense en ello como algo que (casi) siempre aparece en los programas de lenguaje C.

  Una linea en blanco. C ignora los espacios en blanco Pero lo usamos para hacer que el código sea más legible.
*/

int main() {
  /*
    Otra cosa que siempre aparece en un programa en C es "main()". esto se llama una función. {} Se ejecutará cualquier código dentro de sus corchetes
  */
  printf("Hola mundo");
  /*
    "printf()" es una función utilizada para generar/imprimir texto en la pantalla. en nuestro ejemplo, generará "Hola mundo".

    Nota: Tenga en cuenta que: cada declaración C termina con punto y coma ";"

    El cuerpo de "int main()" también podría escribirse como:
    "int main(){printf("Hola mundo");return 0;}"

    Recuerde: el compilador ignora los espacios en blanco. Sin embargo varias líneas hacen que el código sea más legible.
  */
  return 0;
  /*
    "return 0" finaliza la función "main()"
  */
}
/*
  no olvide agregar el corchete de cierre "}" para finalizar la función principal.
*/