#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void bsort(int v[], int n)
{
	int i,j;
	int t, g;                                              
	for(i=1;i<n;i++)
	{
		t = 0;                                         //novo
		for(j=0;j<n-i;j++)
		{
			if(v[j]>v[j+1])
			{
				troca(&v[j],&v[j+1]);
				t = 1;                         //novo
			}
		}
		if (t == 0)                                    //novo
		{                                              //novo
			break;                                 //novo
		}                                              //novo
	}
}
//-------------------------
//-----------------------------------
int main(){
	int *vetor, n,i;
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n);
	vetor = malloc(sizeof(int)*n);// alocando dinamicamente
	geraVet(vetor,n);
	printVetor(vetor,n);
	bsort(vetor,n);
	printf("Vetor ordenado:\n");
	printVetor(vetor,n);

}
