#include <stdio.h>

int main ()
{
  float base, altura;
  
  printf ("Introduce la base del rectangulo:\n");
  scanf ("%f", &base);
  printf ("Introduce la altura del rectangulo:\n");
  scanf ("%f", &altura);

  float area = base*altura;  

  printf ("El area del triangulo de base %.2f y altura %.2f es: %.2f", base, altura, area);
}