#include <stdio.h>
#include <locale.h>
void colocandoAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
int main(){
	colocandoAcentos();
	int vetor[10],i,j=0;
	for(i=0; i<10; i++){
		printf("Digite o valor para [%d]",i);
		scanf("%d",&vetor[i]);
	}
	puts("Números repetidos");
	for(i=0; i<10; i++){
		for(j=i+1;j<10;j++){
			if(i != j){
				if(vetor[i] == vetor[j]){
					printf("Número: %d\n",vetor[i]);
				}
			}
		}
	}
	return 0;
}

