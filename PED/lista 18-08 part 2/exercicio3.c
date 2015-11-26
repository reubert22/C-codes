#include <stdio.h>
#include <locale.h>
void colocaAcento(){
	setlocale(LC_ALL,"Portuguese");
}
int main(){
	colocaAcento();
	int numero;
	
	printf("Digite o número desejado: ");
	scanf("%d",&numero);
	if(numero % 2 == 0){
		printf("O número é par!");
	}else{
		printf("O número é ímpar!");
	}
	return 0;
}
