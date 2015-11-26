#include <stdio.h>

void somaMatriz(int mat[][4]){
	int i,j,soma=0;
	for(i=0; i<10; i++){
		for(j=0; j<4; j++){
			soma += mat[i][j];
		}
	}
	printf("Soma: %d",soma);
}
int main(){
	int mat[10][4];
	int i,j;
	for(i=0; i<10; i++){
		for(j=0; j<4; j++){
			mat[i][j] = i+j;
		}
	}
	somaMatriz(mat);
	
return 0;
}
