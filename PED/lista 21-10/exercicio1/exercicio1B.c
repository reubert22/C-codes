#include <stdio.h>
#include <stdlib.h>
int main(){
	char nome[100];
	int idade;
	int i;
	FILE *arq;
	arq = fopen("Exercio1B.txt","wb");
	if(arq == NULL){
		printf("Erro ao abrir arquivo!");
		exit(1);
	}
	do{
		printf("Digite a idade:");
		scanf("%d", &idade);
		
		if(idade >= 0 ){
			printf("Digite o nome:");
			scanf("%s", nome);	
			fprintf(arq,"%s %d\n", nome, idade);
		}
	}while(idade >= 0);
	fclose(arq);
	
	
	arq = fopen("Exercio1B.txt","rb");
	if(arq == NULL){
		printf("Erro ao abrir arquivo!");
		exit(1);
	}
	rewind(arq);
	while(!feof(arq)){
		fscanf(arq,"%s %d\n", nome, &idade);
		printf("Nome: %s Idade: %d\n",nome,idade);
	}
	fclose(arq);
	return 0;
}
	

