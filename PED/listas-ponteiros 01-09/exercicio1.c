#include <stdio.h>
#include <stdlib.h>
#define LINHA 5
#define COLUNA 4

void preencheMatriz(int matriz[][COLUNA]){
	int i,j,contador = 0;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			matriz[LINHA][COLUNA] = i;
			contador++;
		}
	}
}
void imprimindoMatriz(int matriz[][COLUNA]){
	int i,j;
	printf("--------Matriz--------\n");
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("%d ",matriz[LINHA][COLUNA]);
		}
		putchar('\n');
	}
}
int main(){
	int matriz[LINHA][COLUNA];
	preencheMatriz(matriz);
	imprimindoMatriz(matriz);
}
