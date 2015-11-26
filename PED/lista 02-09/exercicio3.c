#include <stdio.h>

void mostrarMenu(){
	printf("[1] Calcular fatorial do numero digitado\n[2] Calcular o somatorio de 1 ate o numero informado\n");
}
void calculaFatorial(int numeroFornecido){
	int i;
	for(i=1; numeroFornecido > 1; numeroFornecido--){
		i *= numeroFornecido;
	}
	printf("O fatorial de %d e igual a %d",numeroFornecido,i);
}
void calculaSomatorio(int numeroFornecido){
	int cont = 0;
	int soma = 0;
	while(cont <= numeroFornecido){
		soma += cont;
		cont++;
	}
	printf("Somatorio de 1 ate %d: %d \n",numeroFornecido, soma);
}
int main(){
	int numeroFornecido;
	int opcao;
	
	printf("Digite o numero: ");
	scanf("%d",&numeroFornecido);
	
	if(numeroFornecido > 0){
		system("cls");
		mostrarMenu();
		printf("Digite a opcao desejada: "); scanf("%d",&opcao);
		if(opcao == 1){
			calculaFatorial(numeroFornecido);
		}else if(opcao == 2){
			calculaSomatorio(numeroFornecido);
		}else if(opcao != 1 || opcao != 2){
			printf("Opcao invalida!\n");
		}
	}
	
	return 0;
}
