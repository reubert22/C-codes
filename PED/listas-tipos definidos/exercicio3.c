#include <stdio.h>
#include <string.h>


typedef struct{
	int matricula;
	char nome[100];
	float n1,n2,n3;
}alunos;

int main(){
	alunos aluno[5];
	int i;
	for(i=0; i<5; i++){
		fflush(stdin);
		printf("Digite a matricula: ");
			scanf("%d",&aluno[i].matricula);
		fflush(stdin);
		printf("Digite o nome: ");
			gets(&aluno[i].nome);
		fflush(stdin);
		printf("Digite a primeira nota: ");
			scanf("%f",&aluno[i].n1);
		fflush(stdin);
		printf("Digite a segunda nota: ");
			scanf("%f",&aluno[i].n2);
		fflush(stdin);
		printf("Digite a terceira nota: ");
			scanf("%f",&aluno[i].n3);
	}
	system("pause");
	system("cls");
	printf("--------------------------ALUNOS-------------------------------\n");
	for(i=0; i<5; i++){
		printf("Nome: %s\nMatricula: %d\nNota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n",aluno[i].nome,aluno[i].matricula,aluno[i].n1,aluno[i].n2,aluno[i].n3);
	}
	return 0;
}
