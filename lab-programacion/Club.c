#include <stdio.h>
 int main (){
        int edad;
        printf("Necesitamos saber tu edad para ver si puedes ingresar al club\n");
        printf("Que edad tienes?");
        scanf("%i", &edad);

        if (edad>=18){
                printf("Tienes la edad necesaria para ingresar al club");
        }
        else if (edad<=17){
                printf("No tienes la edad necesaria para ingresar al club, necesitas tener 18 años de edad o venir con un acompañante mayor");
        }
        return 0;
 }
