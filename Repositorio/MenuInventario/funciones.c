#include <stdio.h>
#include "funciones.h"

// Implementación de la función mostrarInventario
void mostrarInventario(float cantidad1, float cantidad2, float cantidad3, float cantidad4, float cantidad5, float cantidad6, float precioPersonalizado,float precioPersonalizado2,float precioPersonalizado3, char nombre[20],char nombre2[20],char nombre3[20], char descripcion[100],char descripcion2[100],char descripcion3[100], float precio5, float precio6) {
    float precios[] = {150, 55, 180};  // Precios de los productos 1, 2 y 3
    char *nombres[] = {"Lonas", "Papel Vinil", "Microperforado"};  // Nombres de los productos 1, 2 y 3
    char *descripciones[] = {"Lonas para impresión", "Papel Vinil adhesivo", "Microperforado para ventanas"};  // Descripciones de los productos 1, 2 y 3

    printf("----------------INVENTARIO DE PRODUCTOS TALLER----------------------------------------\n");
    printf(" ID          NOMBRE              DESCRIPCION                 CANTIDAD          PRECIO   \n");
    printf("--------------------------------------------------------------------------------------\n");

    // Imprimir productos 1, 2 y 3
    for (int i = 0; i < 3; i++) {
        printf("%d|%16s|%25s|%16.0f|%16.2f\n", i + 1, nombres[i], descripciones[i], cantidad1, precios[i]);
    }

    // Imprimir producto personalizado (si existe)
    if (cantidad4 != 0) {
        printf("4|%16s|%25s|%16.0f|%16.2f\n", nombre, descripcion, cantidad4, precioPersonalizado);
    }

    // Imprimir productos 5 y 6 (si existen)
    if (cantidad5 != 0) {
        printf("5|%16s|%25s|%16.0f|%16.2f\n", nombre2, descripcion2, cantidad5, precioPersonalizado2);
    }

    if (cantidad6 != 0) {
        printf("6|%16s|%25s|%16.0f|%16.2f\n", nombre3, descripcion3, cantidad6, precioPersonalizado3);
    }

    printf("--------------------------------------------------------------\n");
}

void ingresarProductoPersonalizado(float *cantidad1, float *cantidad2, float *cantidad3, float *cantidad4, float *cantidad5, float *cantidad6, float *precio1, float *precio2, float *precio3, float *precio4, float *precio5, float *precio6, char nombre[20], char descripcion[100]) {
    printf("Ingrese el nombre del nuevo producto: ");
    scanf("%s", nombre);

    printf("Ingrese la descripción del nuevo producto: ");
    scanf("%s", descripcion);

    float cantidad;
    printf("Ingrese la cantidad del nuevo producto: ");
    scanf("%f", &cantidad);

    float precio;
    printf("Ingrese el precio del nuevo producto: ");
    scanf("%f", &precio);

    // Verificar si ya hay un producto personalizado ingresado
    if (*cantidad4 == 0 && *precio4 == 0) {
        *cantidad4 = cantidad;
        *precio4 = precio;
        printf("Nuevo producto '%s' ingresado correctamente.\n", nombre);
    } else if (*cantidad5 == 0 && *precio5 == 0) {
        *cantidad5 = cantidad;
        *precio5 = precio;
        printf("Nuevo producto '%s' ingresado correctamente.\n", nombre);
    } else if (*cantidad6 == 0 && *precio6 == 0) {
        *cantidad6 = cantidad;
        *precio6 = precio;
        printf("Nuevo producto '%s' ingresado correctamente.\n", nombre);
    } else {
        printf("No se puede ingresar el nuevo producto. El inventario está lleno.\n");
    }
}


void modificarCantidadProducto(float *cantidad1, float *cantidad2, float *cantidad3, float *cantidad4, float *cantidad5, float *cantidad6) {
    char opcion;

    printf("¿Qué producto deseas modificar?\n");
    printf("a. Producto 1\n");
    printf("b. Producto 2\n");
    printf("c. Producto 3\n");
    printf("d. Producto 4\n");
    printf("e. Producto 5\n");
    printf("f. Producto 6\n");
    printf("g. Cancelar\n");

    printf("Selecciona una opción: ");
    scanf(" %c", &opcion);

    switch (opcion) {
        case 'a':
            printf("Ingresa la nueva cantidad para el Producto 1: ");
            scanf("%f", cantidad1);
            printf("Cantidad modificada exitosamente.\n");
            break;
        case 'b':
            printf("Ingresa la nueva cantidad para el Producto 2: ");
            scanf("%f", cantidad2);
            printf("Cantidad modificada exitosamente.\n");
            break;
        case 'c':
            printf("Ingresa la nueva cantidad para el Producto 3: ");
            scanf("%f", cantidad3);
            printf("Cantidad modificada exitosamente.\n");
            break;
        case 'd':
            if (*cantidad4 != 0) {
                printf("Ingresa la nueva cantidad para el Producto 4: ");
                scanf("%f", cantidad4);
                printf("Cantidad modificada exitosamente.\n");
            } else {
                printf("No hay un Producto 4 disponible para modificar.\n");
            }
            break;
        case 'e':
            if (*cantidad5 != 0) {
                printf("Ingresa la nueva cantidad para el Producto 5: ");
                scanf("%f", cantidad5);
                printf("Cantidad modificada exitosamente.\n");
            } else {
                printf("No hay un Producto 5 disponible para modificar.\n");
            }
            break;
        case 'f':
            if (*cantidad6 != 0) {
                printf("Ingresa la nueva cantidad para el Producto 6: ");
                scanf("%f", cantidad6);
                printf("Cantidad modificada exitosamente.\n");
            } else {
                printf("No hay un Producto 6 disponible para modificar.\n");
            }
            break;
        case 'g':
            printf("Operación cancelada. No se realizó ninguna modificación.\n");
            break;
        default:
            printf("Opción no válida. Intenta de nuevo.\n");
            break;
    }
}

// Implementación de la función eliminarProducto
void eliminarProducto(float *cantidad1, float *cantidad2, float *cantidad3, float *cantidad4, float *cantidad5, float *cantidad6) {
    char opcion;

    printf("¿Qué producto deseas eliminar?\n");
    printf("a. Producto 1\n");
    printf("b. Producto 2\n");
    printf("c. Producto 3\n");
    printf("d. Producto 4\n");
    printf("e. Producto 5\n");
    printf("f. Producto 6\n");
    printf("g. Cancelar\n");

    printf("Selecciona una opción: ");
    scanf(" %c", &opcion);

    switch (opcion) {
        case 'a':
            *cantidad1 = 0;
            printf("Producto 1 eliminado del inventario.\n");
            break;
        case 'b':
            *cantidad2 = 0;
            printf("Producto 2 eliminado del inventario.\n");
            break;
        case 'c':
            *cantidad3 = 0;
            printf("Producto 3 eliminado del inventario.\n");
            break;
        case 'd':
            if (*cantidad4 != 0) {
                *cantidad4 = 0;
                printf("Producto 4 eliminado del inventario.\n");
            } else {
                printf("No hay un Producto 4 disponible para eliminar.\n");
            }
            break;
        case 'e':
            if (*cantidad5 != 0) {
                *cantidad5 = 0;
                printf("Producto 5 eliminado del inventario.\n");
            } else {
                printf("No hay un Producto 5 disponible para eliminar.\n");
            }
            break;
        case 'f':
            if (*cantidad6 != 0) {
                *cantidad6 = 0;
                printf("Producto 6 eliminado del inventario.\n");
            } else {
                printf("No hay un Producto 6 disponible para eliminar.\n");
            }
            break;
        case 'g':
            printf("Operación cancelada. No se eliminó ningún producto.\n");
            break;
        default:
            printf("Opción no válida. Intenta de nuevo.\n");
            break;
    }
}