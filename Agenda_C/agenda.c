#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "agenda.h"


void statusagenda(struct agenda pt[]){
    printf("Contatos cadastrados na agenda: %i\n",pt[0]);

};
void exibircontatos (struct agenda pt[]) // Fun��o que mostra todos os contatos cadastrados.
 {
     int i;
     
     printf("\n"); 
     printf("||--------------------------------------------------------------||\n");
     printf("||------------------- Lista de Contatos ------------------------||\n");
     printf("||--------------------------------------------------------------||\n\n");
    
     for(i=0;i<pt[0].tam;i++)
     {
           
     printf(" Contato  : %s ",pt[i].nome);
     printf("Telefone : %s ",pt[i].telefone);
     printf("Celular  : %s ",pt[i].celular);
     printf("\n\n");  
     }  
     system("PAUSE");
 }
 void cadastro(struct agenda *pt) // Fun��o para cadastro de contatos na agenda.
 {
   char x='s',verific[100];
   int i,y=-1,j;
   
   printf("\n"); 
   printf("||--------------------------------------------------------------|| \n");
   printf("||------------------- Cadastro de Contatos ---------------------|| \n");
   printf("||--------------------------------------------------------------|| \n\n");  
   
   while((x=='S') || (x=='s'))
   {
      printf(" Digite o nome do contato : "); 
      fflush(stdin);
      fgets(verific,99,stdin);
    // Aqui iremos passar todas as letras digitadas para mai�scula
      for(i=0;i<strlen(verific);i++)
      {
         if((verific[i]>='a') && (verific[i]<='z')) // Passa todos os caracteres min�sculos para maiusculos.
         {
            verific[i]-=32;
         }      
      }
    // Antes de inserir, precisamos verificar se o nome digitado j� existe na agenda
      for(i=0;i<pt[0].tam;i++)
      {
           y=strcmp(verific,pt[i].nome); // Verifica se o nome digitado j� existe na agenda.
           if(y==0)// Caso j� exista um contato com mesmo nome , uma mensagem de erro ser� mostrada na tela.
           {
             printf( " Usuario ja cadastrado ! \n\n"); 
             break;
           }          
      }  
      if(y!=0) // Caso o nome do contato n�o exista na agenda , o processo para cadastrar o usu�rio em ordem
      // alfabetica � iniciado.
      {
         for(i=0;i<pt[0].tam;i++) // Loop at� a quantidade de contatos cadastrados.
         {
           if(verific[0]<pt[i].nome[0]){
           	  break;
		   }
           // Verifica a ordem em que o contato ser� cadastrado , comparando 
           // a primeira letra do nome . Caso o nome informado tenha a primeira letra menor ( a < b )
           // que a de um dos contatos cadastrados, o Loop � interrompido na posi��o que o novo contato ser� 
           //cadastrado. Caso a primeira letra seja igual, o novo contato ser� cadastrado ap�s o �ltimo contato
           //  que seja iniciado pela mesma letra. E por fim , caso a primeira letra seja maior que as cadastradas
           // na agenda, o novo contato ser� cadastrado na �ltima posi��o.
             
         }
         for(j=pt[0].tam;j>=i;j--) // Esse Loop vai modificar a posi��o dos contatos j� cadastrados,para criar o
         // espa�o necess�rio para que o novo contato seja casdastrado.
         {
            
            strcpy(pt[j].nome,pt[j-1].nome); // A �ltima posi��o recebe o conte�do da posi��o anterior a ela, at�
            strcpy(pt[j].telefone,pt[j-1].telefone); // a posi��o do novo cadastrado estar livre para receber o conte�do.
            strcpy(pt[j].celular,pt[j-1].celular);
         }
          
      strcpy(pt[i].nome,verific); 
      printf(" Digite o telefone residencial do contato : "); 
      fflush(stdin);
      fgets((pt[i]).telefone,9,stdin); 
      printf(" Digite o celular do contato : "); 
      fflush(stdin);
      fgets((pt[i]).celular,9,stdin); 
      printf("\n");
      pt[0].tam++;
      printf(" Cadastro Efetuado com Sucesso. \n\n"); // Uma mensagem � mostrada na tela, indicando que o cadastro foi efetuado com sucesso.
      }
      
      printf(" Deseja cadastrar um novo contato ? S/N ");
      scanf("%c",&x);
      printf("\n");
      y=-1;
     
  }
 }
