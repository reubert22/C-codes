#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define LINHA 3
#define COLUNA 3
void mandaMatriz(int matriz[][COLUNA], int linha, int coluna){
	int i,j;
	FILE *arq;
	arq = fopen("matrizes.txt","w");
	if(arq == NULL){
		printf("Problema ao abrir o arquivo!");
		exit(1);
	}
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			fprintf(arq,"%d ", matriz[i][j]);
		}
		putchar('\n');
	}
	fclose(arq);
	imprimeMatrizConsole(matriz);
}
void preencheMatriz(int matriz[][COLUNA]){
	int i,j;
	int numero;
	for(i=0;i<LINHA;i++){
		for(j=0;j<COLUNA;j++){
			printf("Digite o valor da posição [%d][%d]: ",i,j);
			scanf("%d",&numero);
			matriz[i][j] = numero;
		}
	}
}
void imprimeMatrizConsole(int matriz[][COLUNA]){
	int i,j;
	FILE *arq;
	arq = fopen("matrizes.txt","r");
	if(arq == NULL){
		printf("Problema ao abrir o arquivo!");
		exit(1);
	}
	puts("Matriz digitada:");
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("%d ", matriz[i][j]);
		}
		putchar('\n');
	}
	fclose(arq);
}
void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
int main(){
	int matriz[LINHA][COLUNA];
	colocaAcentos();
	preencheMatriz(matriz);
	mandaMatriz(matriz,LINHA,COLUNA);
}
