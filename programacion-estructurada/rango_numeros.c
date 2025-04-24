#include <stdio.h>
#include <stdlib.h>
int main(){
        int min,max,num;
        char genero;
        printf("Ingrese el rango minimo\n");
        scanf("%d", &min);
        printf("Ingres el rango maximo\n");
        scanf("%d", &max);
        printf("Ingrese un numero\n");
        scanf("%d", &num);

        if (num>0){
                printf("El numero es positivo\n");
        }
        else {
         printf("El numero es Negativo\n");
        }

        if (num % 2==0){
        printf("El numero es par\n");
        }
        else {
        printf("El numero es impar\n");
        }

        if (num>=min && num<=max){
                printf("El numero esta dentro del rango\n");
        }
        else {
                printf("El numero no esta dentro dentro del rango\n");
        }
        system("cls");
        printf("Ingrese su genero(M/F):\n");
        scanf(" %c", genero);

        if (genero == 'M' || genero == 'F'){
            printf("Aplica a bono.\n");
        }
        else if(genero =='m' || genero=='f'){
            printf("Corrige, No aplica a bono.\n");
        }
        else {
            printf("No es una letra válida.\n");
        }
        return 0;
}