#include <stdio.h>
#include <string.h>
#include <locale.h>
void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
int main(){
	colocaAcentos();
	fflush(stdin);
	int opcao;
	int condicao = 0;
	char resposta[3];
	float total = 0;
	int divisor;
	char sim[3] = "sim";
	char nao[3] = "nao";
	
	while(condicao == 0){
		printf("[01] Caderno  - R$1.20\n"
			   "[02] Lápis    - R$0.80\n"
			   "[03] Caderno  - R$4.50\n"
			   "[04] Borracha - R$1.00\n"
			   "[05] Régua    - R$1.50\n");
		printf("Digite a opção desejada:");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				total += 1.20;
				printf("Deseja comprar mais? sim ou nao: ");
				scanf("%s",&resposta);
			break;
			case 2:
				total += 0.80;
				printf("Deseja comprar mais? sim ou nao: ");
				scanf("%s",&resposta);
			break;
			case 3:
				total += 4.50;
				printf("Deseja comprar mais? sim ou nao: ");
				scanf("%s",&resposta);
			break;
			case 4:
				total += 1.00;
				printf("Deseja comprar mais? sim ou nao: ");
				scanf("%s",&resposta);
			break;
			case 5:
				total += 1.50;
				printf("Deseja comprar mais? sim ou nao: ");
				scanf("%s",&resposta);
			break;
			default:
				printf("Código inválido.");
				
		}
		
		if(!(strcmp(resposta,"sim"))){
			condicao = 0;
		}else{
			condicao = 1;
		}
	}
	printf("\nValor total da compra: R$%.2f",total);
}
