//En una llantera se ha establecido una promoción de las llantas marca ponchada dicha promoción consiste en lo siguiente
//Si se compran menos de 5 llantas el precio es de 300 cada una, de 250 si se compran de 5 a 10 y 200 si compran más 10
//Obtener la cantidad de dinero que una persona tiene que pagar
#include <stdio.h>
int main(){
        //variables
        int cantidad;
        float precio,total;
        printf("Ingrese la cantidad de llantas a comprar\n");
        scanf("%d", &cantidad);

        if (cantidad<5){
                precio= 300;
        }else {
         if (cantidad<=10) {
                 precio = 250;
         } else {
                precio = 200;
                }
         }

         total= cantidad*precio;

         printf("Precio por llantas:%.2f\n", precio);
         printf("Total a pagar:%.2f\n", total);

         return 0;
}