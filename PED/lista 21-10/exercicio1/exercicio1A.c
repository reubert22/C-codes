#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char nome[100];
	int idade, tam;
	FILE *arq;
	arq = fopen("Exercio1A.txt","wb");
	if(arq == NULL){
		printf("Erro ao abrir arquivo!");
		exit(1);
	}
	do{
		printf("Digite a idade:");
		scanf("%d", &idade);
		if(idade >= 0 ){
			printf("Digite a nome:");
			scanf("%s", nome);
			tam = strlen(nome);
			fwrite(&tam, sizeof(int),1,arq);
			fwrite(nome, sizeof(char),tam,arq);
			fwrite(&idade, sizeof(int),1,arq);
		}
	}while(idade >= 0);
	fclose(arq);
	
	
	arq = fopen("Exercio1A.txt","rb");
	if(arq == NULL){
		printf("Erro ao abrir arquivo!");
		exit(1);
	}
	rewind(arq);
	while(!feof(arq)){
		fread(&tam, sizeof(int),1,arq);
		if(!feof(arq)){
			fread(nome, sizeof(char),tam,arq);
			nome[tam] = '\0';
			fread(&idade, sizeof(int),1,arq);
			printf("Nome: %s Idade: %d\n",nome,idade);
		}
	}
	fclose(arq);
	return 0;
}
	

