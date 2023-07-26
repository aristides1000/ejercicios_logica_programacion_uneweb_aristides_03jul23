
#include <stdio.h>
/* int x1=1, x2=2, x3=3, x4=4, x5=5;

int arr1[4]={-4, 3, 2, 1};
int arr2[3]={-3, 2, 1};
int arr3[3]={-4, 2, 6};
int arr4[4]={1, 2, 3, 4};
int arr5[5]={-4, 5, 2, 1, 5};

int suma_de_elementos_de_arreglo_con_x(int* arr[], int x){
int longitud = sizeof(arr) / sizeof(arr[0]);

for (int i=0; i<longitud; i++){
    x=x+arr[i];
    printf(x);
}
} */

/* int longitud_arreglo(int* arr[]) {
  int longitud = sizeof(arr) / sizeof(arr[0]);
  return longitud;
} */

int main()
{
  /*
    Considere una matriz de enteros y un valor inicial positivo distinto de cero x. Se calcula una suma corrida sumando cada elemento de la matriz a x consecutivamente.

    Determinar el valor mínimo de x tal que la suma corrida sea al menos 1 después de cada iteración.

    arr = [-4, 3, 2, 1];
    valor inicial x = 5
    Suma corrida

    5 + (-4) = 1
    1 + 3 = 4
    4 + 2 = 6
    6 + 1 = 7

    no hay ningún valor menor que 5 que satisfaga la condición*/

  int arr5[5] = {-4, 5, 2, 1, 5};

  int total_x = 0;
  int min_value = 0;
  int x = 0;
  int y = 0;

  int longitud = sizeof(arr5) / sizeof(arr5[0]);

  for (int i = 0; i < longitud; i++)
  {
    total_x += arr5[i];
    if (arr5[i] < 1)
    {
      min_value += arr5[i];
    }
  }

  x = total_x;

  /*---*/
  for (int i = min_value; i < total_x; i++)
  {
    for (int j = 0; j < longitud; j++)
    {
      x += arr5[j];
      printf("%d", x);
      if (x < 1)
      {
        // printf("%d", x + 1);
      }
    }
    x--;
  }

  return 0;
}
