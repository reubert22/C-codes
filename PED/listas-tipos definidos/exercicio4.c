#include <stdio.h>
#include <locale.h>
#define QUANTIDADE 3
typedef struct{
	char nome[30];
	int codigo;
	float preco;
}PRODUTOS;
void limpaBuffer(){
	fflush(stdin);
}
void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
void limpaConsole(){
	system("cls");
}
void preencheProdutos(PRODUTOS *prod){
	colocaAcentos();
	limpaBuffer();
	printf("Digite o código: ");
	scanf("%d",&prod->codigo);
	printf("Digite o nome: ");
	scanf("%s",&prod->nome);
	printf("Digite o preço: ");
	scanf("%f",&prod->preco);
}
void imprimirProdutos(PRODUTOS prod){
	colocaAcentos();
	limpaConsole();
		printf("Código: %d\nNome: %s\nPreço: R$%.2f\n",prod.codigo,prod.nome,prod.preco);
	
}
int main(){
	PRODUTOS produto[QUANTIDADE];
	int i;
	for(i=0; i<QUANTIDADE; i++){
		 preencheProdutos(&produto[i]);
 	}
	for(i=0; i<QUANTIDADE; i++){
		imprimirProdutos(produto[i]);
	} 
	return 0;
}
