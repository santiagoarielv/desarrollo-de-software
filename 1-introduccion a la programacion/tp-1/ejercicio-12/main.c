#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    12-DADA UNA CANTIDAD EXPRESADA EN PIES, Y OTRA EN METROS. DETERMINAR LA SUMA PERO
    CONVERTIDA A PULGADAS, A YARDAS, A METROS Y A MILLAS POR SEPARADO. CONSIDERE LAS
    SIGUIENTES EQUIVALENCIAS:
    1 MILLA = 1609 METROS, 1 PULGADA = 0.0254 METROS, 1 YARDA = 3 PIES, 1 PIE = 12 PULGADAS.
  */

  float pies;
  float metros;

  float sumaEnMetros;
  float SumaEnPulgadas;
  float SumaEnYardas;
  float SumaEnMillas;

  printf("Ingrese la cantidad de pies: ");
  scanf("%f", &pies);

  printf("Ingrese la cantidad de metros: ");
  scanf("%f", &metros);

  sumaEnMetros = (pies / 3.281) + metros;
  SumaEnPulgadas = sumaEnMetros / 0.0254;
  SumaEnYardas = sumaEnMetros / 0.9144;
  SumaEnMillas = sumaEnMetros / 1609;

  printf("La suma en metros es: %f\n", sumaEnMetros);
  printf("La suma en pulgadas es: %f\n", SumaEnPulgadas);
  printf("La suma en yardas es: %f\n", SumaEnYardas);
  printf("La suma en millas es: %f\n", SumaEnMillas);

  return 0;
}
