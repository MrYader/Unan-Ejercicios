#include <stdio.h>
int main (){
        //Variables
        int plato;

        printf("Bienvenido al Mejor Restaurante de León\n");
        printf("MENU\n");
        printf("(1)Gallo pinto con carne asada------C$140\n");
        printf("(2)Sopa de res-----------------------C$160\n");
        printf("(3)Chanco con yuca-------------------C$120\n");
        printf("(4)No deseo comprar\n");
        printf ("Que desea pedir?\n");
        scanf("%i", &plato);


        if (plato == 1){
                printf("Su plato es el gallo pinto con carne asada\nEl precio a pagar es de C$140.");

        }
        else if (plato ==2 ) {
                printf("Su plato es la Sopa de res\nEl precio a pagar es de C$160.");

        }
        else if (plato == 3){
                printf("Su plato es el Chancho con yuca\nEl precio a pagar es de C$120.");
        }
        else if (plato == 4)
        {
                printf("Gracias por vicitarnos, tenga un Buen dia.");
        }

        return 0;
}