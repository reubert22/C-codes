#include <stdio.h>
#include <string.h>
#include <locale.h>

void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
void limpaBufferT(){
	fflush(stdin);
}
int main(){
	char string1[100];
	int i,j,aux;
	
	colocaAcentos();
	limpaBufferT();
	
	printf("Digite a palavra: ");gets(string1);
	
	for(i = 0, j = strlen(string1)-1; i <= j; i++, j--){
		if(string1[i] != string1[j]){
			printf("Palavra ñ palíndrome: %s",string1);
			return 0;
		}
	}

	printf("Palavra palíndrome: %s",string1);
	
	return 0;
}
