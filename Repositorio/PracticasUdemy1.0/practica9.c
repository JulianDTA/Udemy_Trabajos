#include <stdio.h>

int main()
{
    int n, cont_aprobado = 0, cont_suspenso = 0;
    float nota;

    printf("Introduzca el numero de alumnos:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Introduzca la nota del alumno %d\n", i);
        scanf("%f", &nota);

        if (nota >= 5)
        {
            cont_aprobado++;
        }
        else {
            cont_suspenso++;
        }
    }

    printf("El numero de alumnos aprobados es de %d y el numero de numeros de alumnos suspensos es de %d\n", cont_aprobado, cont_suspenso);
}