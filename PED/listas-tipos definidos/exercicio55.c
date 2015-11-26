#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#define MAX_PESSOAS 100

struct Endereco {
	char rua[30];
	unsigned int numero;
	char complemento[10];
	char bairro[20];
	char cep[10];
	char cidade[20];
	char estado[3];
	char pais[15];
};

struct Nascimento {
	unsigned int dia, mes, ano;
};

struct Telefone {
	char ddd[3];
	char telefone[10];
};

struct Agenda {
	char nome[30];
	char email[30];
	struct Telefone telefone;
	struct Endereco endereco;
	struct Nascimento nascimento;
};

int menu(struct Agenda contatos[]);
void imprimeInformacoesContato(struct Agenda contato);
void imprimeInformacoesBasicasContato(struct Agenda contato);
void pesquisaPorNome(struct Agenda contatos[], char nome[]);
void pesquisaPorMesNascimento(struct Agenda contatos[], unsigned int mes);
void pesquisaPorDiaMesNascimento(struct Agenda contatos[], unsigned int dia, unsigned int mes);
void imprimeAgendaCompletaTodasInformacoes(struct Agenda contatos[]);
void imprimeAgendaCompletaInformacoesBasicas(struct Agenda contatos[]);
void criaContato(struct Agenda *contato, char nome[], int dia, int mes);
void checaOpcoes(struct Agenda contatos[], int opcao);

int menu(struct Agenda contatos[]){
    int opcao;
    printf("\n");
    printf("[1] Buscar por nome \n");
    printf("[2] Buscar por mês de nascimento \n");
    printf("[3] Buscar por dia e mês de nascimento \n");
    printf("[4] Imprimir todos os contatos (básico) \n");
    printf("[5] Imprimir todos os contatos (completo) \n");
    printf("[6] Sair \n");
    printf("\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    fflush(stdin);
    if(opcao < 1 || opcao > 6){
        printf("Opção inválida. Escolha uma das opções abaixo: \n");
        menu(contatos);
    }
    checaOpcoes(contatos, opcao);
}

void imprimeInformacoesContato(struct Agenda contato){
	printf("--------------------------------- \n");
	printf("Nome: ....... %s \n", contato.nome);
	printf("Email: ...... %s \n", contato.email);
	printf("Telefone: ... (%s) %s \n", contato.telefone.ddd, contato.telefone.telefone);
	printf("Endereco: ... %s, %u, %s - %s, %s / %s - %s - %s\n", contato.endereco.rua, 
		contato.endereco.numero, 
		contato.endereco.complemento, 
		contato.endereco.bairro, 
		contato.endereco.cidade, 
		contato.endereco.estado, 
		contato.endereco.pais, 
		contato.endereco.cep);
	printf("Nascimento: . %u/%u/%u \n", contato.nascimento.dia, contato.nascimento.mes, contato.nascimento.ano);
}

void imprimeInformacoesBasicasContato(struct Agenda contato){
    printf("--------------------------------- \n");
	printf("Nome: ....... %s \n", contato.nome);
	printf("Email: ...... %s \n", contato.email);
	printf("Telefone: ... (%s) %s \n", contato.telefone.ddd, contato.telefone.telefone);
}

void pesquisaPorNome(struct Agenda contatos[], char nome[]){
	printf("\n");
    int i;
	for(i = 0; i < MAX_PESSOAS; i++){
		if(strcmp(nome, contatos[i].nome) == 0){
			imprimeInformacoesContato(contatos[i]);
		}
	}
	printf("\n");
}

void pesquisaPorMesNascimento(struct Agenda contatos[], unsigned int mes){
	printf("\n");
    int i;
	for(i = 0; i < MAX_PESSOAS; i++){
		if(contatos[i].nascimento.mes == mes){
			imprimeInformacoesContato(contatos[i]);
		}
	}
	printf("\n");
}

void pesquisaPorDiaMesNascimento(struct Agenda contatos[], unsigned int dia, unsigned int mes){
    printf("\n");
    int i;
    for(i = 0; i < MAX_PESSOAS; i++){
        if(contatos[i].nascimento.dia == dia && contatos[i].nascimento.mes == mes){
            imprimeInformacoesContato(contatos[i]);
        }
    }
    printf("\n");
}

void imprimeAgendaCompletaTodasInformacoes(struct Agenda contatos[]){
    int i;
    for(i = 0; i < MAX_PESSOAS; i++){
        imprimeInformacoesContato(contatos[i]);
    }
}

void imprimeAgendaCompletaInformacoesBasicas(struct Agenda contatos[]){
    int i;
    for(i = 0; i < MAX_PESSOAS; i++){
        imprimeInformacoesBasicasContato(contatos[i]);
    }
}

void criaContato(struct Agenda *contato, char nome[], int dia, int mes){
    strcpy(contato->nome, nome);
    strcpy(contato->email, "email@provedor.com.b");
    strcpy(contato->telefone.ddd, "31");
    strcpy(contato->telefone.telefone, "999991010");
    strcpy(contato->endereco.rua, "R. JAbuti");
    contato->endereco.numero = 1527;
    strcpy(contato->endereco.complemento, "casa");
    strcpy(contato->endereco.bairro, "Bela Vista");
    strcpy(contato->endereco.cidade, "Itabirito");
    strcpy(contato->endereco.estado, "MG");
    strcpy(contato->endereco.pais, "Brasil");
    strcpy(contato->endereco.cep, "35450-000");
    contato->nascimento.dia = dia;
    contato->nascimento.mes = mes;
    contato->nascimento.ano = 1996;
}

void checaOpcoes(struct Agenda contatos[], int opcao){
	char nome[30];
	unsigned int dia, mes;

	switch(opcao){
	    case 1:
	        printf("Digite um nome: ");
	        gets(nome);
	        fflush(stdin);
	        pesquisaPorNome(contatos, nome);
	        menu(contatos);
	        break;
	    case 2:
	        printf("Digite o mês de nascimento: ");
	        scanf("%u", &mes);
	        fflush(stdin);
	        pesquisaPorMesNascimento(contatos, mes);
	        menu(contatos);
	        break;
	    case 3:
	        printf("Digite o dia e o mês de nascimento: ");
	        scanf("%u %u", &dia, &mes);
	        fflush(stdin);
	        pesquisaPorDiaMesNascimento(contatos, dia, mes);
	        menu(contatos);
	        break;
	    case 4:
	        imprimeAgendaCompletaInformacoesBasicas(contatos);
	        menu(contatos);
	        break;
	    case 5:
	        imprimeAgendaCompletaTodasInformacoes(contatos);
	        menu(contatos);
	        break;
	    case 6:
	        exit(1);
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");
	struct Agenda contatos[MAX_PESSOAS];
	
	criaContato(&contatos[0], "reubert", 17, 8);
	criaContato(&contatos[1], "paula", 20, 10);
	criaContato(&contatos[2], "fabia", 20, 5);
	
	menu(contatos);
}
