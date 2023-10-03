#include <stdio.h>

int main()
{
	int a=0;
	
	printf("Introduzca ano:");
	scanf("%d", &a);
	
	if ((a%4==0 && a%100!=0)||a%400==0)
	{
		printf("Es bisiesto");
	}
	
	else 
	{
		printf("No es bisiesto");
	}
	
	return 0; 
}
