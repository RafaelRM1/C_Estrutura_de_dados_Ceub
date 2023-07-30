/*Trabalho 1 � Ordena��o por Inser��o e Sele��o
Uma empresa (que neste caso � um banco) com certa frequ�ncia necessita realizar a ordena��o de seus clientes baseando-se em algum crit�rio. 
Nesta etapa do trabalho, dever� ser implementado um programa que possibilite ao funcion�rio realizar a ordena��o dos clientes pelo saldo que ele tiver. 
Os dados dos clientes ser�o lidos (pode ser4 de um arquivo texto) e devem conter para cada cliente o seu nome completo, n�mero da conta (n�mero inteiro positivo de at� 5 d�gitos) e saldo (veja abaixo um exemplo do formato do arquivo).
Para realizar a ordena��o, o usu�rio deve poder selecionar o m�todo a ser utilizado sele��o (Selection Sort) ou inser��o (Insertion Sort).
O usu�rio deve ainda poder ver os dados ordenados na tela. Al�m dos dados ordenados, o sistema dever� apresentar (sempre na tela) o tempo gasto para a ordena��o, e o n�mero de compara��es e movimenta��es feitas entre registros.*/


#include <stdio.h>
#include <stdlib.h>
struct pessoa{
	char nome_comp;
	int numero_conta[5];
	int saldo;
	
};

