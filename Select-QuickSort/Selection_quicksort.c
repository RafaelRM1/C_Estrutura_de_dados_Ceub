#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct dados{
	char nome[50];
	int numero;
	int saldo;
}dados;

void Selection_sort(dados vetor[],int n){
	int pen = n-1;
	dados temp;
	int i,cont,Pos_menor;
	
	for(i=0;i<Pos_menor;i++){
		Pos_menor = i;
	    for(cont = i+1;cont<n;cont++){
			if(vetor[cont].saldo<vetor[Pos_menor].saldo){
			Pos_menor = cont;
			}
		}
		temp = vetor[i];
		vetor[i] = vetor[Pos_menor];
		vetor[Pos_menor] = temp;
	}
	
}
void Insertion_sort(int*Val,int n){
	int i,j,aux;
	for (i=1;i<n;i++){
		aux = Val[i];
		for(j=1;(j>0) && (aux < Val[j-1]);j--){
			Val[j] = Val[j-1];
		}
		Val[j] = aux;
	}
}



int main (){
	dados cliente[10];
	FILE *pont_arq;
	int a;
	char op;
    int i = i - 1;
	
	pont_arq = fopen ("C:\\Users\\rafin\\OneDrive\\Documentos\\Uniceub\\Estrutura_dados\\c_c++\\Trabalho dia3-10\\Banco.txt", "r");
	if(pont_arq == NULL){
		print("Arquivo não existe.\n");
	}
	for(i;i<11;i++){
		printf("Deseja continuar?\nDigite -1 para sair ou qualquer outro numero pra continuar");
	}	scanf("%d",&a);
		if(a==-1){
			return 1;
		}
		printf("Digite o nome do cliente:\n");
		fflush(stdin);
		fgets(cliente[i].nome,50,stdin);
		
		printf("Digite o numero da conta do cliente:\n");
		scanf("%d",&cliente[i].numero);
			if (cliente[i].numero < 0 || cliente[i].numero > 99999){
				printf("Numero invalido");
				return 0;
			}
		printf("Digite o saldo da conta:\n");
		fprintf(pont_arq,"Cliente\n");
		fprintf(pont_arq,"Nome: %s",cliente[i].nome);
		fprintf(pont_arq,"Conta do cliente:%d\n",cliente[i].numero);
		fprintf(pont_arq,"Saldo do cliente:%f\n",cliente[i].saldo);
		
		printf("Deseja ordenar por seleção ou inserção?(S/I)");
		scanf("%c",&op);
		if(op == 'S'||op == 's'){
			
			Selection_sort(cliente[i].saldo,10);
			
			
		}	
				
	fclose (pont_arq);
	    
	
}
