#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct Pilha{
	int dado;
	struct Pilha* prox;
};

typedef struct Pilha pilha;
typedef pilha* pilhaPtr;

void menu();
void push(pilhaPtr*,int);
int pop(pilhaPtr*);
int vazia(pilhaPtr);
void remove(pilhaPtr*,int);
void imprimePilha(pilhaPtr);

int main(){
	
	pilhaPtr P = NULL;
	int valor, opcao,i,x;
	
	menu();
	scanf("%i",&opcao);
	
	do {
		switch(opcao)
		{
			case 1:
				
				puts("Quantos dados deseja inserir?");
				scanf("%i",&x);
				for(i=0;i<x;i++)
				{
					printf("\nEscreva o valor do %i: ",i+1);
					scanf("%i",&valor);
					push(&P,valor);
				}
				imprimePilha(P);
				break;
				
			case 2:
				
				if (!vazia(P)){
					printf("Valor desempilhado \"%i\"\n",pop(&P));
				}
				imprimePilha(P);
				break;
				
			case 3:
				
				printf("Valor a ser removido?\n");
				scanf("%i",&valor);
				remove(&P,valor);
				imprimePilha(P);
				break;
				
			case 4:
				imprimePilha(P);
				break;
			case 5:
				free(P);
				system("pause");
				break;		
			default:
				puts("Opcao Invalida.\n");
            	menu();
            	break;
		}
		if(opcao != 5){
		printf("\n");
		menu();
		scanf("%i",&opcao);
		}
	}while(opcao != 5);
}


void menu(){
	system("cls");
	puts("Escolha a opcao:\n"
      "1 PUSH: Empilhar um ou mais valores na Pilha\n"
      "2 POP: Retirar o ultimo valor da Pilha\n"
      "3 Remove: Retira qualquer valor da pilha\n"
	  "4 Imprime: Imprime a pilha\n"
	  "5 Para fechar o programa.\n"
	  "\nOpcao? ");
	  }
	  
void push(pilhaPtr *topo,int info){
	pilhaPtr novo= (pilhaPtr) malloc(sizeof(pilha));
	
	if(novo != NULL){
		novo->dado = info;
		novo->prox = *topo;
		*topo = novo;
	}
	else{
		printf("%d Não Inserido. Sem memória disponível.\n", info);
	}
}

int pop(pilhaPtr *topo){
	pilhaPtr aux = *topo;
	int valor = (*topo)->dado;
	*topo = (*topo)->prox;
	free(aux);
	return valor;
}

// retorna 1 se a Pilha estiver vazia, 0 caso contrário
int vazia(pilhaPtr topo){
	return topo == NULL;
}

void remove(pilhaPtr *topo,int valor){
	// Declarar Pilha Auxiliar 
	pilhaPtr pilhaAux = NULL, pilha = *topo;
	int i = 0;

	// Varificar existencia do valor
    while(i != 1 && pilha != NULL){
    	// Caso encontre o Valor desejado
        if (pilha->dado == valor) i=1;
        else pilha = pilha->prox;
    }
    
	// Se o valor existir na Pilha
	if(i==1){
		// Retirar os valores da Pilha e alocar em uma Auxiliar
		while((*topo)->dado != valor)
	
		push(&pilhaAux,pop(topo));
	
		// Retirar o valor desejado
		pop(topo);
	
		// Retornar os valores para a Pilha 
		while(pilhaAux != NULL){
			push(topo,pop(&pilhaAux));
			}
		printf("\nValor \"%i\" removido da pilha\n",valor);
		}
	// Se o valor nao estiver na pilha
	else{
	printf("Valor \"%i\" NAO encontrado na pilha\n",valor);
	}
}

void imprimePilha(pilhaPtr aux){
	printf("\n");
	if (aux == NULL){
		printf("A pilha esta vazia.\n");
		puts("\nPressione enter para voltar ao menu.");
		getch();
		}
	else{
		puts("Pilha:");
		while(aux != NULL){
			printf("%i--> ",aux->dado);
			aux = aux->prox;
		}
		puts("NULL\n");
		puts("\nPressione enter para voltar ao menu.");
		getch();
	}
}

