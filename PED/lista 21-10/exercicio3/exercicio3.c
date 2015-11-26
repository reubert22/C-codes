#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
	char nome[100];
	int quantidade;
	float valorUnitario,
		  valorMultiplicacao,
		  valorTotal=0;
	FILE *arq;
	arq = fopen("listadecompras.txt","r");
	if(arq == NULL){
		printf("Problema ao abrir o arquivo!");
		exit(1);
	}
	while(!feof(arq)){
		fscanf(arq,"%s\n%d\n%f\n",nome,&quantidade,&valorUnitario);
		valorMultiplicacao = (quantidade * valorUnitario);
		valorTotal += valorMultiplicacao;
	}
	printf("Valor total da lista de compras: R$%.2f",valorTotal);
	fclose(arq);
	return 0;
}
