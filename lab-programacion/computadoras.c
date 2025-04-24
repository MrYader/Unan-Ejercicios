//En una fábrica de computadoras se plantea ofrecer a los clientes un descuento que dependerá del número de computadoras que compre.
// Si las computadoras son menos de 5 se les dará 10% de descuento sobre el total de compra si el número de computadoras
// es mayor o igual al cinco pero menos de 10 se le otorga un 20% y si son 10 o más se le dará un 40% de descuento, el precio de
// computadora es de 11,000
#include <stdio.h>
int main(){
        // variables
        int cantidad;
        float precio=11000;
        float total, descuento, total_descuento;
        printf("Ingrese la cantidad de pc a comprar\n");
        scanf("%d", &cantidad);

        total= cantidad*precio;

        if (cantidad<5){
                descuento= total*0.10;
        }else {
         if (cantidad<10) {
                 descuento = total * 0.20;
         } else {
                descuento = total * 0.40;
                }
         }

         total_descuento = total - descuento;

        printf("Total sin descuento: %.2f\n", total);
        printf("Descuento aplicado: %.2f\n", descuento);
        printf("Total a pagar con descuento: %.2f\n", total_descuento);

        return 0;

}