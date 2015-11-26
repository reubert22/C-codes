#include <stdio.h>

int somaParImpar(int vet[], int *impar, int *par);
int main(){
	int vet[5];
	int i;
	int impar=0,par=0;
	for(i=0;i<5;i++){
		vet[i] = i;
	}
	somaParImpar(vet,&impar,&par);
	printf("Soma dos pares: %d\nSoma dos Impares: %d",par,impar);
return 0;
}
int somaParImpar(int vet[], int *impar, int *par){
	int i;
	for(i=0;i<5;i++){
		if(vet[i]%2 == 0){
			*par += vet[i];
		}else{
			*impar += vet[i];
		}
	}
	
	return 1;
}
