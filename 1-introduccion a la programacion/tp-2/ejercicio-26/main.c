#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    26-ESCRIBIR UN ALGORITMO PARA SUMAR LOS NÚMEROS ENTEROS DE 1 A 100
    UTILIZANDO:
    A) ESTRUCTURA FOR;
    B) ESTRUCTURA MIENTRAS;
    C) ESTRUCTURA HACER MIENTRAS.
  */

  int i, sum = 0;

  // A) ESTRUCTURA FOR
  for (i = 1; i <= 100; i++)
  {
    sum += i;
  }

  printf("Suma con FOR: %d\n", sum);

  // B) ESTRUCTURA MIENTRAS
  i = 1;
  sum = 0;

  while (i <= 100)
  {
    sum += i;
    i++;
  }

  printf("Suma con WHILE: %d\n", sum);

  // C) ESTRUCTURA HACER MIENTRAS

  i = 1;
  sum = 0;

  do
  {
    sum += i;
    i++;
  } while (i <= 100);

  printf("Suma con DO WHILE: %d\n", sum);

  return 0;
}
