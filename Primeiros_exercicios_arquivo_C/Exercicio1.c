#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *file;
	file = fopen("arq.txt","w");
	
	if(file == NULL){
	printf("Arquivo nao pode ser aberto");
	getchar();
	exit(1);
	}
	char *pont;
	int i;
	char frase[5];
	char sair = 0;
	
	for(i=0;i<5;i++){
	printf("Digite oq quer inserir no arquivo:\n");
    gets(frase);
    fprintf(file,"%s\n",frase);
    pont = frase;
    if(pont==0){
    	break;
	}
	}
	fclose(file);
    
    return 0;	
}
	 	
	

