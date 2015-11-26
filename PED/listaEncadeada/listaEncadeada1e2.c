#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/**************************************************************************************
* Cria��o das estruturas do aluno e a elemento que ter� os dados e o ponteiro proximo.*
**************************************************************************************/
typedef struct{
	char nome[100];
	int matricula;
	float n1;
}aluno;
struct elemento{
	aluno dados;
	struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento *lista;

/***************************
* Montagem dos prot�tipos. *
***************************/
lista* criaLista();
int tamanhoLista(lista *li);
void liberaLista(lista *li);
int inserirInicio(lista *li,aluno al);
int listaVazia(lista *li);
int imprimeLista(lista *li);

int main(){
	lista *li;
	li = criaLista();
	int i;
	/**/char nome[100];
	/**/int matricula;
	/**/float n1;
	/**/aluno a[3];
	for(i=0; i<3; i++){
		fflush(stdin);
		printf("Digite o nome: ");
		gets(a[i].nome);
		printf("Digite a matricula: ");
		scanf("%d",&a[i].matricula);
		printf("Digite a nota: ");
		scanf("%f",&a[i].n1);
		inserirInicio(li,a[i]);
	}
	imprimeLista(li);
	printf("Tamanho da lista: %d",tamanhoLista(li));
	liberaLista(li);
return 0;
}
/********************************************
* Cria��o da lista, com aloca��o de mem�ria *
********************************************/
lista* criaLista(){
	lista *li;
	li = (lista*)malloc(sizeof(lista)); // Aloca��o de mem�ria com cast
	if(li != NULL){
		*li = NULL; // primeiro elemento(INICIO) recebe NULL, assim inicializando a lista.
	}
return li;
}
/***********************************************************************
* Temos aqui uma fun��o para retornar o valor real da lista encadeada. *
***********************************************************************/
int tamanhoLista(lista *li){
	int cont = 0;
	Elem *no;
	if(li == NULL){
		return 0;
	}
	no = *li; // ponteiro no do Elem recebe o primeira posi��o, ou seja, o INICIO
	/***************************************************************************
	* Enquanto o no n�o for NULO(CONDICAO DE PARADA) o contador conta mais 1 e *
	* assim vai contando quantos elementos temos na lista encadeada            *
	***************************************************************************/
	while(no != NULL){
		cont++;
		no = no->prox;
	}
return cont; // Retorna contador, pois queremos o tamanho da lista encadeada.
}
/*******************************************************************************************************
* Fun��o de liberar lista, onde primeiro liberamos os nos(elementos) da lista, e depois liberamos ela. *
*******************************************************************************************************/
void liberaLista(lista *li){
	if(li != NULL){
		Elem *no;
		while((*li) != NULL){
			no = *li; // no recebe o apontado por *li(inicio) logo no vai parar em primeiro elemento
			*li = (*li)->prox; // o inicio recebe o apontado pelo proximo, logo NULL
			free(no); // apagamos o primeiro elemento
		}
		free(li); // liberamos a lista
	}
}
/**********************************************
* Fun��o que insere aluno na lista no inicio. *
**********************************************/
int inserirInicio(lista *li,aluno al){
	if(li == NULL){
		return 0;
	}
	Elem *no;
	no = (Elem*) malloc(sizeof(Elem));
	if(no == NULL){
		return 0;
	}
	no->dados = al;
	no->prox = (*li);
	*li = no;
return 1;
}
/*****************************************************
* Essa fun��o nos permite ver se a lista est� vazia. *
*****************************************************/
int listaVazia(lista *li){
	if(li == NULL){
		return 1;
	}
	if(*li == NULL){
		return 1;
	}
return 0;
}
/*********************************************
* Essa fun��o imprime os elementos da lista. *
*********************************************/
int imprimeLista(lista *li){
	system("cls");
	int i;
	if(listaVazia(li) == 1){
		printf("Lista vazia!");
		return 0;
	}
	Elem *no = *li;
	printf("\n---------------------------------\n");
	while(no != NULL){
		printf("Nome do aluno: %s\nMatricula: %d\nNota: %.2f\n",no->dados.nome,no->dados.matricula,no->dados.n1);
		no = no->prox;
	}
	return 1;
}







