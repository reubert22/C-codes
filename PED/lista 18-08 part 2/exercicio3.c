#include <stdio.h>
#include <locale.h>
void colocaAcento(){
	setlocale(LC_ALL,"Portuguese");
}
int main(){
	colocaAcento();
	int numero;
	
	printf("Digite o n�mero desejado: ");
	scanf("%d",&numero);
	if(numero % 2 == 0){
		printf("O n�mero � par!");
	}else{
		printf("O n�mero � �mpar!");
	}
	return 0;
}
