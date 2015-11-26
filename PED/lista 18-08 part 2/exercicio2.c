#include <stdio.h>
#define MAIORIDADE 18
const int VELHICE = 65;
int main(){
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade >= MAIORIDADE && idade <= VELHICE-1){
		 printf("Ja pode se alistar.");
	}else if(idade >= VELHICE){
		printf("Ja pode se aposentar.");
	}else if(idade  < MAIORIDADE){
		printf("Voce nao precisa se alistar.");
	}
	return 0;
}
