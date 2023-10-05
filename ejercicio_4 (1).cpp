#include <stdio.h>

int main() {
    int valor1, valor2, valor3, cambio;

   
    printf("Introduce el valor para v1: ");
    scanf("%d", &valor1);
    printf("Introduce el valor para v2: ");
    scanf("%d", &valor2);
    printf("Introduce el valor para v3: ");
    scanf("%d", &valor3);
    
 		cambio=valor3;
 		valor3=valor2;
 		valor2=valor1;
 		valor1=cambio;

    
    printf("Valores intercambiados:\n");
    printf("v1: %d\n", valor3);
    printf("v2: %d\n", valor1);
    printf("v3: %d\n", valor2);
    

    return 0;
}
