/*Trabalho 1 – Ordenação por Inserção e Seleção
Uma empresa (que neste caso é um banco) com certa frequência necessita realizar a ordenação de seus clientes baseando-se em algum critério. 
Nesta etapa do trabalho, deverá ser implementado um programa que possibilite ao funcionário realizar a ordenação dos clientes pelo saldo que ele tiver. 
Os dados dos clientes serão lidos (pode ser4 de um arquivo texto) e devem conter para cada cliente o seu nome completo, número da conta (número inteiro positivo de até 5 dígitos) e saldo (veja abaixo um exemplo do formato do arquivo).
Para realizar a ordenação, o usuário deve poder selecionar o método a ser utilizado seleção (Selection Sort) ou inserção (Insertion Sort).
O usuário deve ainda poder ver os dados ordenados na tela. Além dos dados ordenados, o sistema deverá apresentar (sempre na tela) o tempo gasto para a ordenação, e o número de comparações e movimentações feitas entre registros.*/


#include <stdio.h>
#include <stdlib.h>
struct pessoa{
	char nome_comp;
	int numero_conta[5];
	int saldo;
	
};

