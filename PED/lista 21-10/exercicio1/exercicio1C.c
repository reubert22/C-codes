#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
	char nome[100];
	int idade, tam;
	char enter[2] = "\n";
	FILE *arq;
	arq = fopen("Exercio1C.txt","wb");
	if(arq == NULL){
		printf("Erro ao abrir arquivo!");
		exit(1);
	}
	do{
		printf("Digite a idade:");
		scanf("%d", &idade);
		if(idade >= 0 ){
			printf("Digite a nome:");
			scanf(" %s", nome);
			fputs(nome,arq);
			fputs(enter,arq);
			fprintf(arq,"%d", idade);
			fputs(enter,arq);
		}
	}while(idade >= 0);
	fclose(arq);
	
	
	arq = fopen("Exercio1C.txt","rb");
	if(arq == NULL){
		printf("Erro ao abrir arquivo!");
		exit(1);
	}
	rewind(arq);
	while(!feof(arq)){
		tam = strlen(nome);
		fgets(nome,100,arq);
		fscanf(arq,"%d \n", &idade);
		printf("Nome: %sIdade: %d\n",nome,idade);
	}
	fclose(arq);
	return 0;
}
