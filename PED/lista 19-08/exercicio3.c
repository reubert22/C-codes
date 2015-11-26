#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char caractere;
	int contador=0;
	char string[20];
	int i;
	puts("Digite uma palavra:");
	gets(string);
	puts("Digite um caractere:");
	scanf("%c",&caractere);
	for(i=0; i < strlen(string);i++){
		if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
			contador += 1;
			string[i] = caractere;
		}
	}
	printf("Nova String: %s\n",string);
	printf("Quantidade de vogais que ela tinha: %d",contador);
	return 0;
}
