#include <stdio.h>
#include <stdlib.h>
int main(){
        int opcion;
        printf("--Menu de Bebidas--\n(1)Pepsi---C$25\n(2)Agua---C$20\n(3)Big-cola----C$15\n(4)Toña---C45\n(5)Del valle---C$30\n");
        printf("Ingrese la opcion de la bebida que desea\n");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
                printf("Su opcion es una Pepsi y vale C$25");
                break;
        case 2:
                printf("Su opcion es Agua y vale C$20");
                break;
        case 3:
                printf("Su opcion es Big-cola y vale C$15");
                break;
        case 4:
                printf("Su opcion es Toña y vale C$45");
                break;
        case 5:
                printf("Su opcion es Del valle y vale C$30");
                break;

        default:
        printf("Opcion invalida");
                break;
        }
        return 0;
}