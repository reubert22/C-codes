#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
typedef struct{
	char rua[30];
	char numero[10];
	char bairro[30];
	char cidade[50];
}endereco;
typedef struct{
	char nome[50];
	int idade;
	endereco enderecos;
}pessoa;

int main(){
	int i;
	int numPessoas;
	
	
	fflush(stdin);
	printf("Digite o numero de pessoas que deseja inserir: ");scanf("%d",&numPessoas);
	for(i=0; i<numPessoas; i++){
		pessoa p[numPessoas];
		fflush(stdin);
		printf("Digite o nome: ");
			gets(&p[i].nome);
		printf("Digite a idade: ");
		fflush(stdin);
			scanf("%d",&p[i].idade);
		printf("Digite a rua: ");
		fflush(stdin);
			gets(&p[i].enderecos.rua);
		printf("Digite o numero: ");
		fflush(stdin);
			gets(&p[i].enderecos.numero);
		printf("digite o bairro: ");
		fflush(stdin);
			gets(&p[i].enderecos.bairro);
		printf("digite a cidade: ");
		fflush(stdin);
			gets(&p[i].enderecos.cidade);
	}
	for(i=0; i<numPessoas; i++){
		pessoa p[numPessoas];
		printf("Nome: %s\nIdade: %d\n   Endereco\nRua: %s\nNumero: %s\nBairro: %s\nCidade: %s\n",p[i].nome,p[i].idade,p[i].enderecos.rua,p[i].enderecos.numero,p[i].enderecos.bairro,p[i].enderecos.cidade);
	}
	
	return 0;
}
