#include <stdio.h>
//Ejercicio 5
int main() {
        //Variables
    float sueldo_base, venta1, venta2, venta3, total_ventas, comision, sueldo_total;

    printf("Ingrese el sueldo base del vendedor:\n");
    scanf("%f", &sueldo_base);

    printf("Ingrese el monto de las 3 ventas:\n");
    scanf("%f %f %f", &venta1, &venta2, &venta3);


    total_ventas = venta1 + venta2 + venta3;
    comision = total_ventas * 0.10;

    sueldo_total = sueldo_base + comision;

    printf("El sueldo total del vendedor es: %f\n", sueldo_total);

    return 0;
}
