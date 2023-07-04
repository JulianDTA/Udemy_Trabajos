#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[50];
    char caracter;

    printf("Introduzca una cadena\n");
    gets(cadena);
    printf("Introduzca un caracter\n");
    caracter = getchar();

    int i = 0;
    int posicion = -1;
    while (cadena[i] != '\0' && posicion == -1)
    {
        if (cadena[i] == caracter)
        {
            posicion = i;
        }
        i = i + 1;
    }
    if (posicion != -1)
    {
        printf("El caracter %c se encuentra en la cadena %s en la posicion %d", caracter, cadena, posicion);
    }
    else
    {
        printf("El caracter %c no se encuentra en la cadena %s", caracter, cadena);
    }
}