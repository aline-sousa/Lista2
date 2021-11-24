

#include <stdio.h>
#include "bibliotecaMAtriz.h"


int main (){
	int m[100][100], i, j, raio = 0, n, x, y;
	for(i=0;i<100; i++)
		for(j=0; j<100; j++)
		m[i][j]=0;
	mostraMatriz(m, 100, 100);
	printf("Quantidade de registros de raio: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Coordenada que o raio caiu: ");
		scanf("%d%d", &x, &y);
		m[x][y]++;
	}
	mostraMatriz(m,10,10);
	for(i=0;i<100; i++)
		for(j=0; j<100; j++)
			if(m[i][j]>1)
			raio = 1;
	if(raio ==1)
	printf("Raios cairam no mesmo lugar na cidade!");
	else 
	printf("Raios nao cairam no mesmo lugar");
	return 0;
}
