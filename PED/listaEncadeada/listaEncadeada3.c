#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	char marca[15];
	int ano;
	char cor[10];
	float preco;
}carros;
struct elemento{
	carros dados;
	struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento *lista;

/*prototipagem aqui*/
lista* criaLista();
int inserirLista(lista *li,carros car);
int removeInicio(lista *li,int quantRemocao);
int listaVazia(lista *li);
int liberarLista(lista *li);
int tamanhoLista(lista *li);
int imprimirLista(lista *li);

int main(){
	lista *li;
	li = criaLista();
	int i;
	int quantCarros,quantRemocao;
	int opcao;
	while(1){
		system("cls");
		setlocale(LC_ALL,"Portuguese");
		printf("[1] Adicionar carro\n[2] Excluir carro\n[3] Mostrar carros\n[4] Mostrar tamanho da lista\n[5] Sair\nEscolha a opção: ");
		fflush(stdin);
		scanf("%d",&opcao);
		
		if(opcao == 1){
			printf("Desejas adicionar quantos carros? ");
			fflush(stdin);
			scanf("%d",&quantCarros);
			carros car[quantCarros];
			for(i=0; i<quantCarros; i++){
				fflush(stdin);
				printf("Digite a marca: ");fflush(stdin);
				gets(car[i].marca);
				printf("Digite o ano: ");fflush(stdin);
				scanf("%d",&car[i].ano);
				printf("Digite a cor: ");fflush(stdin);
				gets(car[i].cor);
				printf("Digite o preco: ");fflush(stdin);
				scanf("%f",&car[i].preco);
				inserirLista(li,car[i]);
			}			
		}else if(opcao == 2){
			system("cls");
			printf("Deseja remover quantos? ");
			scanf("%d",&quantRemocao);
			if(removeInicio(li,quantRemocao) == 1){
				printf("Removido com Sucesso!\n");
			}else{
				printf("Erro ao Remover!");
			}
			system("pause");
		}else if(opcao == 3){
			imprimirLista(li);
		}else if(opcao == 4){
			system("cls");
			if(tamanhoLista(li) == 0){
				printf("Lista está vazia!\n");
			}else{
				printf("Tamanho da lista: %d\n",tamanhoLista(li));
			}
			system("pause");
		}else if(opcao == 5){
			return 0;
		}else{
			printf("Opção inválida!\n");
		}
	}
	
	liberarLista(li);
return 0;
}
/*********************************************/
lista* criaLista(){
	lista *li;
	li = (lista*) malloc(sizeof(lista));
	if(li != NULL){
		*li = NULL;
	}
return li;
}
/*********************************************/
int inserirLista(lista *li,carros car){
	if(li == NULL){
		return 0;
	}
	Elem *no;
	no = (Elem*) malloc(sizeof(Elem));
	if(no == NULL){
		return 0;
	}
	no->dados = car;
	no->prox = (*li);
	*li = no;
return 1;
}
/*********************************************/
int liberarLista(lista *li){
	if(listaVazia(li) == 1){
		return 0;
	}
	Elem *no;
	while((*li) != NULL){
		no = *li;
		*li = (*li)->prox;
		free(no);
	}
	free(li);
}
/*********************************************/
int listaVazia(lista *li){
	if(li == NULL){
		return 1;
	}
	if(*li == NULL){
		return 1;
	}
return 0;
}
/********************************************/
int tamanhoLista(lista *li){
	int cont=0;
	if(listaVazia(li) == 1){
		return 0;
	}
	Elem *no = *li;
	while(no != NULL){
		cont++;
		no = no->prox;
	}
return cont;
}
/********************************************/
int removeInicio(lista *li, int quantRemocao){
	int i;
	for(i=0; i<quantRemocao; i++){
		if(li == NULL){
			return 0;
		}
		Elem *no;
		no = *li;
		*li = no->prox;
		free(no);
	}
return 1;
}
/********************************************/
int imprimirLista(lista *li){
	system("cls");
	int i;
	if(listaVazia(li) == 1){
		printf("Lista vazia!\n");
		return 0;
	}
	Elem *no = *li;
	printf("\n------------------------------------------------\n");
	while(no != NULL){
		printf("Marca: %s\nCor: %s\nAno: %d\nPreco: R$%.2f\n",no->dados.marca,no->dados.cor,no->dados.ano,no->dados.preco);
		no = no->prox;
	}
	system("pause");
	return  1;
}














