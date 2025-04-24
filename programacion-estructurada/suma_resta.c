#include<stdio.h>
int main (){
        int opcion;
        float num1, num2, resultado, promedio;
        printf("(1)suma\n(2)resta\n");
        scanf("%i", &opcion);

        if (opcion==1){
                printf("Ingrese dos numeros\n");
                scanf("%f", &num1);
                scanf("%f", &num2);
                resultado=(num1+num2);
                promedio=(num1+num2)/2;
                printf("El resultado es:%f\n", resultado);
                printf("El promedio es:%f", promedio);
        }
        else if (opcion==2){
                printf("Ingrese dos numeros\n");
                scanf("%f", &num1);
                scanf("%f", &num2);
                resultado=(num1-num2);
                promedio=(num1-num2)/2;
                printf("El resultado es:%f\n", resultado);
                printf("El promedio es:%f", promedio);
        }
        return 0;
}