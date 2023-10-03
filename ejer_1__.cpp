#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  

    int opcion;

    while (1) {  

        opcion = rand() % 6;  

        int num1 = rand() % 11; 
        int num2 = rand() % 11; 

        switch (opcion) 
		{
			
            case 1:	
                printf("Operacion: Suma\n");
        		printf("Numero 1: %d\n", num1);
      	  		printf("Numero 2: %d\n", num2);
                printf("Resultado de la suma: %d\n\n", num1 + num2);
                break;
                
                
            case 2:
                printf("Operacion: Resta\n");
                printf("Numero 1: %d\n", num1);
      	  		printf("Numero 2: %d\n", num2);
                printf("Resultado de la resta: %d\n\n", num1 - num2);
                break;
                
                
            case 3:
                printf("Operacion: Multiplicacion\n");
                printf("Numero 1: %d\n", num1);
      	  		printf("Numero 2: %d\n", num2);
                printf("Resultado de la multiplicacion: %d\n\n", num1 * num2);
                break;
                
                
            case 4:
                printf("Operacion: Division\n");
               	printf("Numero 1: %d\n", num1);
      	  		printf("Numero 2: %d\n", num2);
                if (num2 != 0) {
                    printf("Resultado de la division: %.2f\n\n", (double)num1 / num2);
                } else {
                    printf("No se puede dividir por 0.\n\n");
                }
                break;
            
        }

        if (opcion == 5) {
            printf("Programa terminado.\n\n");
            break;  
        }
    }

    return 0;
}
