#include <stdio.h>
#include <locale.h>
void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
int main(){
	colocaAcentos();
	int vetor[7];
	int i;
	for(i=0; i<7; i++){
		vetor[i] = i;
	}
	for(i=0; i<7; i++){
		printf("Endereçamento de %d: [%d]\n",vetor[i],&vetor[i]);
	}
	return 0;
}
