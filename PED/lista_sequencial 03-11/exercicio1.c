#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}

//void libera(lista *li){
//	free(li);
//}


void limpaBufferT(){
	fflush(stdin);
}

void limpaTela(){
	system("cls");
}
/*STRUCT*/
typedef struct{
	char nome[100];
	int ano;
}carros;
typedef struct{
	int qtd;
	carros dados[MAX];
}lista;
/*FIM DE STRUCT*/

/*CRIANDO A LISTA*/
lista* criaLista(){
	lista *li;
	li = (lista*) malloc(sizeof(lista));
	if(li != NULL){
		li->qtd = 0;
	}
	return li;
}
/*FIM DA FUN?O CRIALISTA*/

/*FUN?O DE IMPRIMIR A LISTA*/
int imprimeLista(lista *li){
	lista *pont;
	int i;
	if(listaVazia(li)){
		printf("Lista vazia!\n");
		return 0;
	}
	for(i=0; i<li->qtd; i++){
		printf("\nNome do carro: %s\nAno:           %d",li->dados[i].nome,li->dados[i].ano);	
	}
}
/*FINAL DA FUN?O DE IMPRIMIR A LISTA*/


/*FUNCAO PARA VERIFICAR SE A LISTA ESTA CHEIA e VAZIA*/
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
	}
	return (li->qtd == 0);
}
/*FINAL DA FUNCAO LISTACHEIA E LISTAVAZIA*/

/*FUN?O PARA INSERIR DADOS NA LISTA*/
int insereLista(lista *li, carros c1){
	if(li == NULL){
		return 0;
	}
	if(listaCheia(li)){
		return 0;
	}
	li->dados[li->qtd] = c1; //dados[indice] = nome,ano
	li->qtd++;
	return 1;
}
/*FINAL DA FUN?O INSERELISTA*/


int main(){
	lista *li;
	int i;
	char nome[100];
	li = criaLista();
	//instanciando carros
	carros c1[3];
	for(i=0;i<3;i++){
		limpaBufferT();
		printf("Digite o nome do carro: ");gets(c1[i].nome);
		printf("Digite o ano: ");scanf("%d",&c1[i].ano);
		insereLista(li,c1[i]);
	}
	//*******************
	imprimeLista(li);
	//libera(li);
	return 0;
}
