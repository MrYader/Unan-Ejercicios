#include <stdio.h>
int codCliente, resp;
int main (){
        printf("Estimado Usuario su saldo esta por vencerse\n por favor ingrese su codigo de usario para pagar\n");
        printf("Ingrese su codigo de usuario\n");
        scanf ("%i", &codCliente);
        printf("Su codigo: %i es correcto?\n", codCliente);
        printf("(1) Si\n(0)No\n");
        scanf("%i", &resp);

        if (resp==1) {
                printf("Perfecto!\n Su codigo ha sido verificado con exito.\n Su saldo sera renovado");
        } else  {
                printf("Lo siento, su codigo es incorrecto.\a");
        }
        return 0;
}