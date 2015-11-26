#include <stdio.h>

int maiorDaMatriz(int mat[][2],int *maior,int *menor);
int main(){
	int mat[3][2];
	int i,j;
	int maior=0,menor=0;
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			mat[i][j] = i+j;
		}
	}
	maiorDaMatriz(mat,&maior,&menor);
	
	printf("Menor: %d\nMaior: %d",maior,menor);
	
return 0;
}
int maiorDaMatriz(int mat[][2],int *maior,int *menor){
	int i,j;
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			if(mat[i][j] > menor){
				*maior = mat[i][j];
				*menor = *menor;
			}else{
				*menor = mat[i][j];
				*maior = *maior;
			}
		}
	}
	return 1;
}
