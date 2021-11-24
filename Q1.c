/*
1. Escreva um programa que leia ou gere um vetor de N elementos inteiros (N deve ser informado pelo usuário
e o limite do vetor é 100) e apresente a soma de seus elementos.
*/

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaArray.h"

int main(){
	int n[100],num,i,soma=0;
	printf("Digite o numero de elementos para o vetor:");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
	
	   scanf("%d",&n[i]);
	
		soma+=n[i]; // soma = soma + v[i];
	}
	printf("Soma dos elementos do vetor:%d\n",soma);	 

	return 0;
}
