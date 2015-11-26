#include <stdio.h>

void somaNumeros(int vetor[]);
int main(){
	int vetor[10];
	int i;
	for(i=0;i<10;i++){
		vetor[i] = i;
	}
	somaNumeros(vetor);
	
	return 0;
}
void somaNumeros(int vetor[]){
	int i, soma=0;
	for(i=0;i<10;i++){
		soma += vetor[i];
	}
	printf("Soma: %d",soma);
}
