#include <stdio.h>
#include <string.h>
#include <locale.h>
void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
void limpaBufferT(){
	fflush(stdin);
}
void concatenaStrings(char destino[100], char origem[100]){
	strcat(destino,origem);
}
int main(){
	char string1[100],
		 string2[100],
		 string3[100],
		 string4[100];
	char strOficial[100],
		 strVazio[10] = "";
	
	colocaAcentos();
	limpaBufferT();
	
	printf("Digite a primeira palavra: ");
	gets(string1);
	printf("Digite a segunda palavra: ");
	gets(string2);
	printf("Digite a terceira palavra: ");
	gets(string3);
	printf("Digite a quarta palavra: ");
	gets(string4);
	
	strcpy(strOficial,strVazio);
	concatenaStrings(strOficial,string1);
	concatenaStrings(strOficial,string2);
	concatenaStrings(strOficial,string3);
	concatenaStrings(strOficial,string4);
	
	printf("Concatenado: %s",strOficial);
	return 0;
}
