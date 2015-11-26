#include <stdio.h>
#include <locale.h>
#include <math.h>
void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
void preencheMatriz(int matriz[][10]){
	int i,j;
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
		matriz[i][j] = 1;
		}
	}
}
void calculaMatriz(int matriz[][10]){
	int i,j;
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(i < j){
				matriz[i][j] = (2*i)+(7*j)-2;
			}else if(i == j){
				matriz[i][j] = (pow(i,2)*3)-1;
			}else if(i > j){
				matriz[i][j] = (pow(i,3)*4)+(5*(pow(j,2)))+1;
			}
		}
	}
}
void imprimeMatriz(int matriz[][10]){
	int i,j;
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			printf("  %5d",matriz[i][j]);
		}
		putchar('\n');
	}
}
int main(){
	colocaAcentos();
	int primeiraMatriz[10][10];
	preencheMatriz(primeiraMatriz);
	calculaMatriz(primeiraMatriz);
	imprimeMatriz(primeiraMatriz);
	return 0;
}
