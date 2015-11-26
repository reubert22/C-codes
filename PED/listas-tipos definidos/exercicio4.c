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
	printf("Digite o c�digo: ");
	scanf("%d",&prod->codigo);
	printf("Digite o nome: ");
	scanf("%s",&prod->nome);
	printf("Digite o pre�o: ");
	scanf("%f",&prod->preco);
}
void imprimirProdutos(PRODUTOS prod){
	colocaAcentos();
	limpaConsole();
		printf("C�digo: %d\nNome: %s\nPre�o: R$%.2f\n",prod.codigo,prod.nome,prod.preco);
	
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
