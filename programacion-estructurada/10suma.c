#include <stdio.h>

int main() {
    int suma;
    int inicio = 57;

    for(int i = 57; i < 67; i++) {
        suma += inicio + i;
        printf("suma:%d\n", suma);
    }
    return 0;
}
