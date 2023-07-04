#include <stdio.h>
#include "funciones.h"

int main(int argc, char *argv[]) {
    char opcion;

    float cantidad1 = 0, cantidad2 = 0, cantidad3 = 0, cantidad4 = 0, cantidad5 = 0, cantidad6 = 0;
    float precio1 = 150, precio2 = 55, precio3 = 180, precio4 = 0, precio5 = 0, precio6 = 0;
    char nombre[20];
    char descripcion[100];

    do {
        printf("--------------MENU-------------\n");
        printf("a. Ver Inventario\n");
        printf("b. Ingreso de Producto\n");
        printf("c. Modificar Producto\n");
        printf("d. Eliminar Producto\n");
        printf("e. Salir\n");
        printf("--------------------------------\n");

        printf("Por favor seleccione una opción:\n");
        scanf(" %c", &opcion);

        switch (opcion) {
            case 'a':
                mostrarInventario(cantidad1, cantidad2, cantidad3, cantidad4, cantidad5, cantidad6, precio4, nombre, descripcion, precio5, precio6);
                break;
            case 'b':
                printf("Opción 'Ingreso de Producto' seleccionada.\n");
                ingresarProductoPersonalizado(&cantidad1, &cantidad2, &cantidad3, &cantidad4, &cantidad5, &cantidad6, &precio1, &precio2, &precio3, &precio4, &precio5, &precio6, nombre, descripcion);
                break;
            case 'c':
                printf("Opción 'Modificar Producto' seleccionada.\n");
                modificarCantidadProducto(&cantidad1, &cantidad2, &cantidad3, &cantidad4, &cantidad5, &cantidad6);
                break;
            case 'd':
                printf("Opción 'Eliminar Producto' seleccionada.\n");
                eliminarProducto(&cantidad1, &cantidad2, &cantidad3, &cantidad4, &cantidad5, &cantidad6);
                break;
            case 'e':
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intenta de nuevo.\n\n");
                break;
        }
    } while (opcion != 'e');

    return 0;
}
