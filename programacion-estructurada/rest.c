#include <stdio.h>

#define MAX_PLATOS 5

typedef struct {
    char nombre[30];
    float precio;
} Plato;

void mostrarMenu(Plato menu[], int n);
float tomarPedido(Plato menu[], int n);

int main() {
    Plato menu[MAX_PLATOS] = {
        {"Hamburguesa", 5.99},
        {"Pizza", 8.50},
        {"Ensalada", 4.75},
        {"Pasta", 7.25},
        {"Sopa", 3.50}
    };

    printf("Bienvenido al restaurante!\n\n");
    mostrarMenu(menu, MAX_PLATOS);
    float total = tomarPedido(menu, MAX_PLATOS);
    printf("\nEl total de su pedido es: $%.2f\n", total);
    printf("Gracias por su visita!\n");

    return 0;
}

void mostrarMenu(Plato menu[], int n) {
    printf("Menu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s - $%.2f\n", i + 1, menu[i].nombre, menu[i].precio);
    }
}

float tomarPedido(Plato menu[], int n) {
    int opcion, cantidad;
    float total = 0;
    char continuar;

    do {
        printf("\nSeleccione el numero del plato que desea pedir: ");
        scanf("%d", &opcion);

        if (opcion < 1 || opcion > n) {
            printf("Opcion invalida. Intente de nuevo.\n");
            continue;
        }

        printf("Ingrese la cantidad de %s: ", menu[opcion - 1].nombre);
        scanf("%d", &cantidad);

        total += menu[opcion - 1].precio * cantidad;

        printf("\nDesea pedir otro plato? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return total;
}
