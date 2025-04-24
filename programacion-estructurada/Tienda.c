#include <stdio.h>

#define IVA 0.15 #define DESC_3 0.03 #define DESC_5 0.05

int main() {
        //variables
        float iva=0.15, des_3=0.03, desc_5=0.05;
        int opcion, cantidad;
        float subtotal, descuento, total, precios[4] = {100.0, 200.0, 300.0, 400.0};

printf("Productos disponibles:\n");
printf("1. Tv---------------------$%.2f\n", precios[0]);
printf("2. Telefono---------------$%.2f\n", precios[1]);
printf("3. Laptop Dell------------$%.2f\n", precios[2]);
printf("4. Teclado mecanico-------$%.2f\n", precios[3]);

// Selección de producto
printf("Ingrese el número del producto que desea comprar: ");
scanf("%d", &opcion);

if (opcion < 1 || opcion > 4) {
    printf("Opción inválida.\n");

}

// Cantidad de producto
printf("Ingrese la cantidad a comprar: ");
scanf("%d", &cantidad);

subtotal = precios[opcion - 1] * cantidad;

// Aplicar descuentos
if (subtotal > 1500) {
    descuento = subtotal * desc_5;
} else if (subtotal > 1000) {
    descuento = subtotal * des_3;
}

total = (subtotal - descuento) * (1 + iva);

printf("Subtotal: $%.2f\n", subtotal);
printf("Descuento aplicado: $%.2f\n", descuento);
printf("Total con IVA: $%.2f\n", total);

return 0;

}