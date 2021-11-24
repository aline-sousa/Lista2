/*
3. Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, conte quantos valores
impares existem no vetor. Apresente o vetor e a quantidade de impares no final
*/


#include <stdio.h>
#include <stdlib.h>


int main(){
	int n[100],num,i,soma=0;
	printf("Digite o numero de elementos para o vetor:");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
	
	   scanf("%d",&n[i]);
	
		if (n[i]%2 != 0){
		
		soma+=n[i]; // soma = soma + v[i];
		printf("\nVetor impar: %d", n[i]);	
		}
		
	}
	printf("\nSoma dos elementos impares do vetor:%d\n",soma);
	 

	return 0;
}


