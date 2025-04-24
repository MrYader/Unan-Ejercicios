#include <stdio.h>
#include <math.h>

int main(){
        //Variables
        float num,raiz;
        printf("Ingrese un numero para calcular su raiz cuadrada\n");
        scanf("%f", &num);
        raiz=sqrt(num);
        printf("Su raiz cuandra es:%.2f", raiz);

        return 0;
}