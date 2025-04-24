#include <stdio.h>
#include <stdlib.h>
int main (){
        int opcion, num1, num2;
        float resultado;
        printf("(1)Suma\n(2)Resta\n(3)multiplicacion\n(4)division\n");
        printf("Ingrese una opcion\n");
        scanf("%i", &opcion);


        switch (opcion){
        case 1:
         printf("--Suma--\n");
         printf("Ingrese el primer numero\n");
         scanf("%i", &num1);
         printf("Ingrese el segundo numero\n");
         scanf("%i", &num2);
         resultado=(num1+num2);
                printf("La suma es:%2.f", resultado);
                break;
        case 2:
         printf("--Resta--\n");
         printf("Ingrese el primer numero\n");
         scanf("%i", &num1);
         printf("Ingrese el segundo numero\n");
         scanf("%i", &num2);
         resultado=(num1-num2);
                printf("La resta es:%2.f", resultado);
                break;
        case 3:
         printf("--Multiplicacion--\n");
         printf("Ingrese el primer numero\n");
         scanf("%i", &num1);
         printf("Ingrese el segundo numero\n");
         scanf("%i", &num2);
         resultado=(num1*num2);
                printf("La multiplicacion es:%2.f", resultado);
                break;
         case 4:
         printf("--Division--\n");
         printf("Ingrese el primer numero\n");
         scanf("%i", &num1);
         printf("Ingrese el segundo numero\n");
         scanf("%i", &num2);
         resultado=(num1/num2);
                printf("La division es:%2.f", resultado);
                break;

        default:
        printf("opcion invalida");
                break;
        }
        return 0;
}
