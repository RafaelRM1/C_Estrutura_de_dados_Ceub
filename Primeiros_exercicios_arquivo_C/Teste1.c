#include <stdio.h>
#include <stdlib.h>
int main(void){
	
	FILE *file;
	file = fopen("C:\\Users\\rafin\\OneDrive\\Documentos\\Uniceub\\Estrutura_dados\\c++\\Arquivos_testes\\teste.txt","w");
	if(file == NULL){
	printf("Arquivo nao pode ser aberto");
	getchar();
	exit(1);
}
    int i;
	char frase[100];
	for(i=0;i<2;i++){
	printf("Digite oq quer inserir no arquivo:\n");
    gets(frase);
    fprintf(file,"%s\n",frase);
    }
    
	
	fclose(file);
	
    
	return 0;
}

