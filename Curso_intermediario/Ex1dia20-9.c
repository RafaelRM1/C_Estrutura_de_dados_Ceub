#include <stdio.h>
#include <stdlib.h>
int main (){
	
	int numero1,numero2;
	
	printf("Atribua um valor ao primeiro numero: \n");
	scanf("%d", &numero1);
	printf("Atribua um valor ao segundo numero: \n");
	scanf("%d", &numero2);
	
	if (numero1 > numero2){
		printf("O numero maior eh %d",numero1);
	}
	else{
		printf("O numero maior eh %d",numero2);
	}

	
	return 0;
}
