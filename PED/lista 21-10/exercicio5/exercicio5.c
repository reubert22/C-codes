#include <stdio.h>
#include <locale.h>
struct atleta{
	char nome[100];
	char esporte[100];
	int idade;
	float altura;
};
void colocaAcento(){
	setlocale(LC_ALL,"Portuguese");
}
void limpaBufferT(){
	fflush(stdin);
}

int main(){
	FILE *arq;
	arq = fopen("Arquivo.txt","wb");
	if(arq == NULL){
		puts("Problema ao abrir!");
		exit(1);
	}
	
	struct atleta atletas[5];
	int i;
	
	colocaAcento();
	limpaBufferT();
	
	for(i=0;i<5;i++){
		limpaBufferT();
		printf("Digite o nome: ");
		scanf("%s",&atletas[i].nome);
		printf("Digite o esporte: ");
		scanf("%s",&atletas[i].esporte);
		printf("Digite a idade: ");
		scanf("%d",&atletas[i].idade);
		printf("Digite sua altura: ");
		scanf("%f",&atletas[i].altura);
	}
	fwrite(atletas, sizeof(struct atleta), 5, arq);
	fclose(arq);
	
	struct atleta c; 
	arq = fopen("Arquivo.txt","rb");
	if(arq == NULL){
		puts("Problema ao abrir!");
		exit(1);
	}
	printf("-------------DADOS DOS ATLETAS--------------\n\n");
	fseek(arq,1*sizeof(struct atleta),SEEK_SET);
	fread(&c, sizeof(struct atleta), 1, arq);
	printf("Nome: %s\nEsporte:%s\nIdadde: %d\nAltura: %.2f\n", c.nome, c.esporte, c.idade, c.altura);
	rewind(arq);
	
	printf("--------------------------------------------\n");
	fseek(arq,4*sizeof(struct atleta),SEEK_SET);
	fread(&c, sizeof(struct atleta), 1, arq);
	printf("Nome: %s\nEsporte:%s\nIdadde: %d\nAltura: %.2f\n", c.nome, c.esporte, c.idade, c.altura);
	rewind(arq);
	
	printf("--------------------------------------------\n");
	fseek(arq,0*sizeof(struct atleta),SEEK_SET);
	fread(&c, sizeof(struct atleta), 1, arq);
	printf("Nome: %s\nEsporte:%s\nIdadde: %d\nAltura: %.2f\n", c.nome, c.esporte, c.idade, c.altura);
	rewind(arq);
	
	printf("--------------------------------------------\n");
	fseek(arq,2*sizeof(struct atleta),SEEK_SET);
	fread(&c, sizeof(struct atleta), 1, arq);
	printf("Nome: %s\nEsporte:%s\nIdadde: %d\nAltura: %.2f\n", c.nome, c.esporte, c.idade, c.altura);
	rewind(arq);
	
	printf("--------------------------------------------\n");
	fseek(arq,3*sizeof(struct atleta),SEEK_SET);
	fread(&c, sizeof(struct atleta), 1, arq);
	printf("Nome: %s\nEsporte:%s\nIdadde: %d\nAltura: %.2f\n", c.nome, c.esporte, c.idade, c.altura);
	
	fclose(arq);
	return 0;
}
