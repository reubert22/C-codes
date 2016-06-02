/**********************************************
* This code was made to verify or generate CPF
**********************************************/
/*************************
* Author: Reubert Barbosa
*************************/
#include <stdio.h>
#define TAM 11

void executa_somatorio(int resultado[] ,int cpf[], int pesos[], int posicao);
void verifica_digito(int somatorio, float resto_divisao, int cpf[], int posicao);
void imprime_cpf(int cpf[]);
void imprime_digito_verificador(int cpf[], int posicao);
void recebe_cpf();
void descobre_estado(int cpf[]);

int main(){
	int cpf[TAM] = {2,1,1,1,1,1,1,1,1};
	
	int peso_primeiro[TAM] = {10,9,8,7,6,5,4,3,2};
	int peso_segundo[TAM] =  {11,10,9,8,7,6,5,4,3,2};
	
	int resultado_primeiro[TAM], 
		resultado_segundo[TAM];
		
	int i;
	int somatorio = 0;
	float result_divisao;
	float resto_divisao;
	float digito_verificador = 0;
	
	
	executa_somatorio(resultado_primeiro, cpf, peso_primeiro, 9);
	executa_somatorio(resultado_segundo, cpf, peso_segundo, 10);
	
	imprime_cpf(cpf);
	imprime_digito_verificador(cpf, 9);
	imprime_digito_verificador(cpf, 10);
	descobre_estado(cpf);

	return 0;
}
void descobre_estado(int cpf[]){
	int digito_estadual = 8;
	int i;
	if(cpf[digito_estadual] == 1){
		printf("\nOrigem do CPF: Distrito Federal, Goias, Mato Grosso do Sul ou Tocantins");
	}else if(cpf[digito_estadual] == 2){
		printf("\nOrigem do CPF:  Pará, Amazonas, Acre, Amapa, Rondonia ou Roraima");
	}else if(cpf[digito_estadual] == 3){
		printf("\nOrigem do CPF: Ceara, Maranhao ou Piaui");
	}else if(cpf[digito_estadual] == 4){
		printf("\nOrigem do CPF: Pernambuco, Rio Grande do Norte, Paraiba ou Alagoas");	
	}else if(cpf[digito_estadual] == 5){
		printf("\nOrigem do CPF: Bahia ou Sergipe");
	}else if(cpf[digito_estadual] == 6){
		printf("\nOrigem do CPF: Minas Gerais");
	}else if(cpf[digito_estadual] == 7){
		printf("\nOrigem do CPF: Rio de Janeiro ou Espirito Santo");
	}else if(cpf[digito_estadual] == 8){
		printf("\nOrigem do CPF: Sao Paulo");
	}else if(cpf[digito_estadual] == 9){
		printf("\nOrigem do CPF: Parana ou Santa Catarina");
	}else{
		printf("Origem do CPF: Rio Grande do Sul");
	}
}
void executa_somatorio(int resultado[] ,int cpf[], int pesos[], int posicao){
	int i,
		somatorio = 0;
	float result_divisao,
		  resto_divisao;
	
	for(i=0; i<TAM; i++){
		resultado[i] = (cpf[i] * pesos[i]);
		somatorio += resultado[i];
	}
	
	result_divisao = somatorio / 11;
	resto_divisao = somatorio % 11;
	
	verifica_digito(somatorio, resto_divisao, cpf, posicao);
	verifica_digito(somatorio, resto_divisao, cpf, posicao);
}

void verifica_digito(int somatorio, float resto_divisao, int cpf[], int posicao){
	float digito_verificador = 0;
	if(resto_divisao < 2){
		digito_verificador = 0;
	}else{
		digito_verificador = 11 - resto_divisao;
		cpf[posicao] = digito_verificador;
	}
}

void imprime_cpf(int cpf[]){
	int i;
	printf("CPF: ");
	for(i=0; i<TAM; i++){
		printf("%d",cpf[i]);
		if(i == 2){
			printf(".");
		}else if(i == 5){
			printf(".");
		}else if(i == 8){
			printf("-");
		}
	}
}

void imprime_digito_verificador(int cpf[], int posicao){
	printf("\nDigito Verificador: ");
	printf("%d",cpf[posicao]);
}
