#include <stdio.h>
#include <locale.h>
#define LINHA 3
#define COLUNA 3
void colocandoAcento(){
	setlocale(LC_ALL,"Portuguese");
}
int main(){
	colocandoAcento();
	int matriz[LINHA][COLUNA];
	int vetor[LINHA];
	int i, j;
	
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("Digite o valor para [%d][%d]",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0; i<LINHA; i++){
		vetor[i]=0;
		for(j=0; j<COLUNA; j++){
			vetor[i] += matriz[j][i];
		}
	}
	printf("Matriz:\n");
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf(" %d ",matriz[i][j]);
		}
		putchar('\n');
	}
	puts("Soma das colunas:");
	for(i=0; i<LINHA; i++){
		printf(" %d",vetor[i]);
	}
	return 0;
}
