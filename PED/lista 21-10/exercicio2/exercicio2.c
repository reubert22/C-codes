#include <string.h>
#include <stdio.h>
#include <stdio.h>
int main(){
	char arquivo1[100],
		 arquivo2[100],
		 arquivo3[100];
	char caractere;
	FILE *arq1,*arq2,*arq3;
	printf("Digite o nome do primeiro arquivo: "); scanf("%s",arquivo1);
	printf("Digite o nome do segundo arquivo: "); scanf("%s",arquivo2);
	arq3 = fopen("arquivo3.txt","w+");
	arq1 = fopen(arquivo1,"w+");
	arq2 = fopen(arquivo2,"w+");
	if(arq1 == NULL){
		printf("Problema ao abrir arquivo!");
		exit(1);
	}
	if(arq2 == NULL){
		printf("Problema ao abrir arquivo!");
		exit(1);
	}
	if(arq3 == NULL){
		printf("Problema ao abrir arquivo!");
		exit(1);
	}
	
	while(!feof(arq1)){
		caractere = fgetc(arq1);
		fputc(caractere, arq3);
	}
	while(!feof(arq2)){
		caractere = fgetc(arq2);
		fputc(caractere, arq3);
	}
	printf("Done...");
	fclose(arq1);
	fclose(arq2);
	fclose(arq3);
	return 0;
}
