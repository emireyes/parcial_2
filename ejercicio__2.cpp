#include <stdio.h>
#include <stdlib.h>
int main (){
	for (int i=1; i<=100; i++){
	if(i%3 == 0){
		printf("%d es multiplo de 3\n",i);
	}else{
		printf("%d no es multiplo de 3\n",i);
	}
}
	return 0;
}

