# include <stdio.h>
  //variables
  float far,cel;
int main(){
        printf("Convertir grados Fahrenheit a celcios\n Ingrese la cantidad de Fahrenheit\n ");
        scanf ("%f", &far);

        cel=(far-32)*5/9;

      printf("La convercion de grados Fahrenheit a Celcios es: %.4f", cel);
      return 0;

}