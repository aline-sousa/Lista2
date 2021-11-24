#include <stdio.h>
#include <string.h>

int main (){
	char dna[10], comp[10];
	int i, n;
	printf("Digite a sequencia de DNA: ");
	gets(dna);
	n = strlen(dna);
	for(i=0; i<n; i++){
		switch(dna[i]){
			case 'A': comp[i]= 'T';
			break;
			case 'T': comp[i]= 'A';
			break;
			case 'C': comp[i]= 'G';
			break;
			case 'G': comp[i]= 'C';
			break;
		}
	}
	
}
