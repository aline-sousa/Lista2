/*
2. Dado um vetor A de n números reais, faça um programa para obter o maior e o menor elemento do vetor,
apresente o vetor, maior e menor valor.
*/



#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaArray.h"

int main(){
	float n[50],num,soma=0, maior = n[0], menor = n[0];
	int i ;
	printf("Digite o numero de elementos para o vetor:");
	scanf("%f",&num);
	
		for(i=0;i<num;i++){
			scanf("%f",&n[i]);
		}
		
		maior = n[0];
		menor = n[0];
		
		for (i=1; i<num; i++){
			if(n[i]<menor)
				menor = n[i];
			else if (n[i]> maior)
				maior = n[i];
		}	
				
		printf("\nMaior: %.2f", maior);
		printf("\nMenor: %.2f", menor);
		getch();
}



