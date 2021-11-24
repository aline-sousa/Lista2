/*
4. Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, conte quantos valores
pares existem no vetor. Apresente a média dos valores pares.
*/



#include <stdio.h>
#include <stdlib.h>


int main(){
	int n[100],num,i,soma=0, media =0, count= 0;
	printf("Digite o numero de elementos para o vetor:");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
	
	   scanf("%d",&n[i]);
	
		if (n[i]%2 == 0){
		count = count + 1;
		soma+=n[i]; // soma = soma + v[i];
			
		}
		
	}
	media = soma/count;
	printf("\nMedia dos elementos pares do vetor:%d\n", media);
	 

	return 0;
}


