#include <stdio.h>
#include <stdlib.h>
int main(){
        //Variable
        int num;
        printf("Ingrese un numero para determinar si es par, impar, positivo o negativo\n");
        scanf("%d", &num);


        if (num>0){
                if(num % 2==0){
                printf("El numero es positivo y par");
                }
                else {
                        printf("El numero es positivo e impar");
                }
        }
        else {
                printf("El numero no es positivo");
        }
        return 0;
}