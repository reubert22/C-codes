#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct{
	char nome[100];
	int idade;
	int matricula;
}aluno;
typedef struct{
	int qtd;
	aluno dados[10];
}lista;
void limpaTela(){
	system("cls");
}
void pausaTela(){
	system("pause");
}
void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
void limpaBufferT(){
	fflush(stdin);
}
void liberaLista(lista *li){
	free(li);
}
lista* criaLista(){
	lista *li;
	li = (lista*)malloc(sizeof(lista));
	if(li != NULL){
		li->qtd = 0;
	}
	return li;
}
int insereNaLista(lista *li, aluno al){
	if(li == NULL){
		return 0;
	}
	if(listaCheia(li)){
		return 0;
	}
	li->dados[li->qtd] = al;
	li->qtd++;
	return 1;
}
int listaCheia(lista *li){
	if(li == NULL){
		return -1;
	}else{
		return (li->qtd == 10);
	}
}
int listaVazia(lista *li){
	if(li == NULL){
		return -1;
	}else{
		return (li->qtd == 0);
	}
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
			printf("Nome aluno: %s\nIdade aluno: %d\nMatrícula aluno: %d\n",li->dados[i].nome, li->dados[i].idade, li->dados[i].matricula);
		}
		printf("---------------------------------------\n");
}
int tamanhoLista(lista *li){
	if(li == NULL){
		return -1;
	}else{
		return li->qtd;
	}
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
int main(){
	lista *li;
	li = criaLista();
	int tamanhoL;
	int removendo;
	
	colocaAcentos();
	/*inserindo alunos na lista */
	aluno al[3];
	int i;
	for(i=0; i<3; i++){
		limpaBufferT();
		printf("Digite o nome do aluno: ");
		gets(al[i].nome);
		printf("Digite a idade: ");
		scanf("%d",&al[i].idade);
		printf("Digite a matrícula: ");
		scanf("%d",&al[i].matricula);
		insereNaLista(li,al[i]);
	}
	/****************************/
	limpaTela();
	imprimeLista(li);
	/*recebendo o tamanho da lista e imprimindo*/
	tamanhoL = tamanhoLista(li);
	printf("O tamanho da lista é: %d\n",tamanhoL);
	/*******************************************/
	removendo = removeListaFinal(li);
	if(removendo == 1){
		printf("Removido com sucesso!\n");
	}
	pausaTela();
	limpaTela();
	imprimeLista(li);
	/*recebendo o tamanho da lista e imprimindo após remover o ultimo*/
	tamanhoL = tamanhoLista(li);
	printf("O tamanho da lista é: %d\n",tamanhoL);
	/*******************************************/
	liberaLista(li);
	
	return 0;
}
