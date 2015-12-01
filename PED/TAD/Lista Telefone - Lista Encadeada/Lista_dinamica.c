/*Code by Reubert Barbosa*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


typedef struct{
	char nome[50],
			 marca[50];
}Telefone;
struct elemento{
	Telefone dados;
	struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento *lista;

lista* criaLista();
void destroiLista(lista *li);
int quantidadeElementosLista(lista *li);
int insereNaListaPrimeiro(lista *li, Telefone tel);
int removerNaListaPrimeiro(lista *li);
int imprimeLista(lista *li);
int checaSeListaVazia(lista *li);
int checaSeListaCheia(lista *li);
void limpaBuffer();
void limpaTela();
void pausaTela();
void colocaAcentos();



int main(){
	lista *li;
	li = criaLista();
	int opcao;
	
	while(1){
		limpaTela();
		colocaAcentos();
		
		printf("[1] Adicionar Telefone \n[2] Imprimir Lista de telefones\n[3] Quantidade de telefones na lista\n[4] Remover ultimos\n[99] Sair\n\n");
		limpaBuffer();
		printf("Digite a opção desejada: ");
		scanf("%d",&opcao);
		
		if(opcao == 1){
			int qntdTelefones,i;
			
			printf("Digite a quantidade de telefones que deseja inserir: ");
			limpaBuffer();
			scanf("%d",&qntdTelefones);
			
			Telefone tel[qntdTelefones];
			
			for(i=0; i<qntdTelefones; i++){
				limpaBuffer();
				printf("Digite o nome: ");
				gets(tel[i].nome);
				limpaBuffer();
				printf("Digite a marca: ");
				gets(tel[i].marca);
			
			insereNaListaPrimeiro(li,tel[i]);
			}
			limpaTela();
		}else if(opcao == 2){
			limpaTela();
			imprimeLista(li);
			pausaTela();
		}else if(opcao == 3){
			limpaTela();
			int qntd;
			qntd = quantidadeElementosLista(li);
			printf("Quantidade de telefones cadastrados: %d\n",qntd);
			pausaTela();
		}else if(opcao == 4){
			int qntdRemocao,i;
			limpaBuffer();
			printf("Digite a quantidade de telefones que deseja remover: ");
			scanf("%d",&qntdRemocao);
			for(i=0; i<qntdRemocao; i++){
				removerNaListaPrimeiro(li);
			}
		}else if(opcao == 99){
			char confirmacao[4];
			limpaBuffer();
			printf("Deseja mesmo sair? (sim ou nao): ");
			gets(confirmacao);
			if(strcmp(confirmacao,"sim")==0){
				return 0;
			}
		}
	}
	destroiLista(li);
	
	return 0;
}


lista* criaLista(){
	lista *li;
	li = (lista*)malloc(sizeof(lista));
	if(li != NULL){
		*li = NULL;
	}
	return li;
}
void destroiLista(lista *li){
	if(li != NULL){
		Elem *no;
		while((*li) != NULL){
			no = *li;
			*li = (*li)->prox;
			free(no);
		}	
		free(li);
	}
}
int quantidadeElementosLista(lista *li){
	int contador = 0;
	if(li == NULL){
		return 0;
	}
	Elem *no;
	no = *li;
	while(no != NULL){
		contador++;
		no = no->prox;
	}
	return contador;
}
int insereNaListaPrimeiro(lista *li, Telefone tel){
	if(li == NULL){
		return 0;
	}
	Elem *no;
	no = (Elem*)malloc(sizeof(Elem));
	if(no ==NULL){
		return 0;
	}
	no->dados = tel;
	no->prox = (*li);
	*li = no;
	
	return 1;
}
int removerNaListaPrimeiro(lista *li){
	if(li == NULL){
		return 0;
	}
	if(checaSeListaVazia(li)){
		return 0;
	}
	Elem *no;
	no = *li;
	*li = no->prox;
	free(no);
	
	return 1;
}
int imprimeLista(lista *li){
	if(li == NULL){
		printf("Lista vazia");
		return 0;
	}
	Elem *no;
	no = *li;
	while(no != NULL){
		printf("Nome: %s\tMarca: %s\n",no->dados.nome,no->dados.marca);
		no = no->prox;
	}
	return 1;
}
int checaSeListaVazia(lista *li){
	if(li == NULL || *li == NULL){
		return 1;
	}
	return 0;
}
int checaSeListaCheia(lista *li){
	if(li != NULL || *li != NULL){
		return 1;
	}
	return 0;
}
void limpaBuffer(){
	fflush(stdin);
}
void limpaTela(){
	system("cls");
}
void pausaTela(){
	system("pause");
}
void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}




