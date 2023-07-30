#include "stdio.h" 
#include "string.h" 
main()
{ 
 FILE *arqv; 
 char *nome_arqv, frase[81]; 
 nome_arqv= '\0'; 
 printf("Entre com o nome do arquivo, o ponto e a extensao: "); 
 scanf("%c",nome_arqv); 
 arqv=fopen(nome_arqv,"w"); 
 printf("Digite uma linha [max. 80 caracteres] e tecle return: \n\n"); 
 getchar(); 
 while(strlen(gets(frase)) > 1) 
{ 
   fputs(frase,arqv); 
   fputs("\n",arqv); 
} 
fclose(arqv);} 
