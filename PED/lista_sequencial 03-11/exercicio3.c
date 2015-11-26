#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define MAX 50
typedef struct{
	char marca[15];
	int ano;
	char cor[10];
	float preco;
}carros;
typedef struct{
	int qtd;
	carros dados[MAX];
}lista;
void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
void limpaBufferT(){
	fflush(stdin);
}
void limpaConsole(){
	system("cls");
}
void pausaConsole(){
	system("pause");
}
lista* criaLista(){
	lista *li;
	li = (lista*) malloc(sizeof(lista));
	if(li != NULL){
		li->qtd = 0; 
	}
	return li;
}
int listaCheia(lista *li){
	if(li == NULL){
		return -1;
	}else{
		return (li->qtd == MAX);
	}
}
int listaVazia(lista *li){
	if(li == NULL){
		return -1;
	}else{
		return (li->qtd == 0);
	}
}
int insereNaLista(lista *li, carros car){
	if(li == NULL){
		return 0;
	}
	if(listaCheia(li)){
		return 0;
	}
	li->dados[li->qtd] = car;
	li->qtd++;
	return 1;
}
void liberaLista(lista *li){
	free(li);
}
int removeListaFinal(lista *li){
	if(li == NULL){
		return 0;
	}
	if(listaVazia(li)){
		return 0;
	}
	li->qtd--;
	
	return 1;
}
void imprimeLista(lista *li){
	lista *aux;
	int i;
	
	colocaAcentos();
		if(listaVazia(li)){
			printf("Lista está vazia!");
			return 0;
		}
		printf("----------------LISTA------------------\n");
		for(i=0; i<li->qtd; i++){
			printf("Marca: %s\nAno: %d\nCor: %s\nPreço: %.2f\n",li->dados[i].marca, li->dados[i].ano, li->dados[i].cor, li->dados[i].preco);
		}
		printf("---------------------------------------\n");
}
int main(){
	lista *li;
	li = criaLista();
	//carros car[MAX];
	int opcao;
	
	colocaAcentos();
	while(1){
		limpaBufferT();
		printf("[1] Adicionar carro\n[2] Excluir ultimo carro\n[3] Mostrar carros\n[4] Sair\nEscolha a opção: ");
		scanf("%d",&opcao);
		if(opcao == 1){
			limpaBufferT();
			int i,quantCarros,inseriu;
			printf("Deseja adicionar quantos carros? ");
			scanf("%d",&quantCarros);
			carros car[quantCarros];
			for(i=0; i<quantCarros; i++){
				limpaBufferT();
				printf("Digite a marca: ");
				gets(car[i].marca);
				printf("Digite o ano: ");
				scanf("%d",&car[i].ano);
				limpaBufferT();
				printf("Digite a cor: ");
				gets(car[i].cor);
				printf("Digite o preco do carro: ");
				scanf("%f",&car[i].preco);
				
				insereNaLista(li,car[i]);
			}
		}else if(opcao == 4){
			return 0;
		}else if(opcao == 2){
			int i,numRemocao,indice;
			limpaBufferT();
			printf("Deseja remover quantos? ");
			scanf("%d",&numRemocao);
			for(i=0; i<numRemocao; i++){
				indice = removeListaFinal(li);
			}
			if(indice == 0){
				printf("Lista vazia!\n");
			}else{
				printf("Removido com sucesso!\n");
			}
		}else if(opcao == 3){
			imprimeLista(li);
		}
	}
	return 0;
}
