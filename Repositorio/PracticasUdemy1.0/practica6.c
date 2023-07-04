#include <stdio.h>

int main()
{
    int precio_base, kilometro;
    float consumo, precio_final;

    printf("Introduzca el precio base del vehiculo:\n");
    scanf("%d", &precio_base);

    printf("Introduzca los kilometros:\n");
    scanf("%d", &kilometro);

    printf("Introduzca el consumo:\n");
    scanf("%f", &consumo);

    if (kilometro < 2000 && consumo <= 5)
    {
        precio_final = precio_base * 1.2;
    }
    else if (kilometro > 2000 && consumo <= 5)
    {
        precio_final = precio_base * 1.1;
    }
    else if (consumo > 5)
    {
        precio_final = precio_base * 1.05;
    }
    printf("El precio final del vehiculo es: %.2f", precio_final);
}