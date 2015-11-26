/*Code by Reubert Barbosa*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
void limpaBuffer(){
	fflush(stdin);
}
void limpaConsole(){
	system("cls");
}
void pausaConsole(){
	system("pause");
}

typedef struct{
	char nome[100],
		 marca[30],
		 cor[30];
	float preco;
}telefones;
typedef struct{
	int qtd;
	telefones dados[100];
}lista;

lista* criaLista();
int insereLista(lista *li,telefones tel);
int listaCheia(lista *li);
int listaVazia(lista *li);
void liberaLista(lista *li);
int imprimeLista(lista *li);
int buscarPorNome(lista *li, char nome[100]);
int buscarPorPreco(lista *li, float preco);
int buscarPorMarca(lista *li, char marca[30]);


int main(){
	lista *li;
	li = criaLista();
	int i;
	int opcao;
	int quantCelular;
	while(1){
		limpaConsole();
		colocaAcentos();
		printf("[1] Inserir Telefone\n[2] Imprimir Lista de Telefones\n[3] Excluir ultimo inserido\n[4] Buscar por marca\n[5] Buscar por nome\n[6] Buscar por preco\n[7] Sair\n Digite a opção: ");
		limpaBuffer();
		scanf("%d",&opcao);
		if(opcao == 1){
			printf("Deseja adicionar quantos celulares? ");
			limpaBuffer();
			scanf("%d",&quantCelular);
			telefones tel[quantCelular];
			for(i=0; i<quantCelular; i++){
				printf("Digite o nome do telefone: ");
				limpaBuffer();
				gets(tel[i].nome);
				printf("Digite a marca: ");
				limpaBuffer();
				gets(tel[i].marca);
				printf("Digite a cor: ");
				limpaBuffer();
				gets(tel[i].cor);
				printf("Digite o preço: ");
				limpaBuffer();
				scanf("%f",&tel[i].preco);
			
			insereLista(li,tel[i]);
			}
		}else if(opcao == 2){
			limpaConsole();
			imprimeLista(li);
			pausaConsole();
		}else if(opcao == 3){
			excluirElem(li);
			pausaConsole();
		}else if(opcao == 4){
			char marca[30];
			printf("Digite a marca: ");
			limpaBuffer();
			gets(marca);
			buscarPorMarca(li,marca);
			pausaConsole();
		}else if(opcao == 5){
			char nome[100];
			printf("Digite o nome que quer buscar: ");
			limpaBuffer();
			gets(nome);
			buscarPorNome(li,nome);
			pausaConsole();
		}else if(opcao == 6){
			float preco;
			printf("Digite o preco: ");
			limpaBuffer();
			scanf("%f",&preco);
			buscarPorPreco(li,preco);
			pausaConsole();
		}else if(opcao == 7){
			liberaLista(li);
			return 0;
		}else{
			printf("Opção inválida!\n");
			pausaConsole();
		}
	}
	return 1;
}
lista* criaLista(){
	lista *li;
	li = (lista*) malloc(sizeof(lista));
	if(li != NULL){
		li->qtd = 0;
	}
	return li;
}
int listaVazia(lista *li){
	if(li == NULL){
		return -1;
	}
	return (li->qtd == 0);
}
int listaCheia(lista *li){
	if(li == NULL){
		return -1;
	}
	return (li->qtd == 100);
}
void liberaLista(lista *li){
	free(li);
}
int insereLista(lista *li, telefones tel){
	if(li == NULL){
		return 0;
	}
	if(listaCheia(li)){
		return 0;
	}
	li->dados[li->qtd] = tel;
	li->qtd++;
return 1;
}

int imprimeLista(lista *li){
	colocaAcentos();
	int i;
	if(listaVazia(li)){
		printf("A lista de telefones esta vazia.\n");
		return 0;
	}
	printf("\n------------TELEFONES--------------\n");
	for(i=0; i<li->qtd ; i++){
		printf("Nome: %s\nMarca: %s\nCor: %s\nPreco: R$%.2f\n\n",li->dados[i].nome,li->dados[i].marca,li->dados[i].cor,li->dados[i].preco);
	}	
	return 1;
}
int excluirElem(lista *li){
	if(listaVazia(li)){
		printf("A lista de telefones esta vazia.\n");
		return 0;
	}
	li->qtd--;
return 1;
}
int buscarPorNome(lista *li, char nome[100]){
	if(listaVazia(li)){
		printf("Lista de telefones vazia.\n");
		return 0;
	}
	int i=0;
	for(i=0; i<li->qtd; i++){
		if(strcmp(li->dados[i].nome,nome)==0){
			printf("Nome: %s\nMarca: %s\nCor: %s\nPreco: R$%.2f\n\n",li->dados[i].nome,li->dados[i].marca,li->dados[i].cor,li->dados[i].preco);
			//return 0;
		}
	}
	
	return 1;
}
int buscarPorPreco(lista *li,float preco){
	if(listaVazia(li)){
		printf("Lista de telefones vazia.\n");
		return 0;
	}
	int i=0;
	for(i=0; i<li->qtd; i++){
		if(li->dados[i].preco == preco){
			printf("Nome: %s\nMarca: %s\nCor: %s\nPreco: R$%.2f\n\n",li->dados[i].nome,li->dados[i].marca,li->dados[i].cor,li->dados[i].preco);
		}
	}
	return 1;
}
int buscarPorMarca(lista *li,char marca[30]){
	if(listaVazia(li)){
		printf("A lista de telefones está vazia.\n");
		return 0;
	}
	int i;
	for(i=0;i<li->qtd;i++){
		if(strcmp(li->dados[i].marca,marca)==0){
			printf("Nome: %s\nMarca: %s\nCor: %s\nPreco: R$%.2f\n\n",li->dados[i].nome,li->dados[i].marca,li->dados[i].cor,li->dados[i].preco);
		}
	}
	return 1;
}








