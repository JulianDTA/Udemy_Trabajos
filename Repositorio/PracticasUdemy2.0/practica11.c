#include <stdio.h>

int main()
{
    float pesos[5];
    float suma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Introduce un peso para almacenarlo\n");
        scanf("%f", &pesos[i]);
        suma = suma + pesos[i];
    }

    float promedio = suma / 5;
    int cont_mayor_igual = 0;
    int cont_menor = 0;

    for (int i = 0; i < 5; i++)
    {
        if (pesos[i] >= promedio)
        {
            cont_mayor_igual++;
        }
        else
        {
            cont_menor++;
        }
    }

    printf("El peso promedio es: %.2f\n", promedio);
    printf("Numero pesos mayores o iguales que el promedio es: %d, Numero pesos menores que el promedio es: %d", cont_mayor_igual, cont_menor);
}