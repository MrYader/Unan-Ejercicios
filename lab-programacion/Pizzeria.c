#include <stdio.h>
int mai(){
        int tipo,ingrediente;
        printf("Bienvenido a la Pizzeria UNAN_Leon");
        printf("Tipos de pizas:\n(1)Vegetariana\n(2)No vegetariana\n");
        scanf("%i", &tipo);

        if (tipo=1){
                printf("Ingredientes vegetarianos: Pimirnto y Tofu\n");
                printf("Ingrese un ingrediente que desea en su pizza.\n(1)Pimiento(2)Tofu");
                if (ingrediente=1){
                        printf("pimiento");
                }
                else if(ingrediente==2){
                        printf("Tofu");
                }
        }
        else if (tipo==2){
                printf("Ingredientes no vegeteriano ")
        }

}
