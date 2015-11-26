#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	char *pont;
	
	int i,tamPalavra;
	
	printf("Digite a palavra:");
	gets(str);
	tamPalavra = strlen(str);
	pont = &str[tamPalavra];
	

	for(i=0; i<tamPalavra; i++){
		printf("%c",pont[tamPalavra]);
	}
	
	printf("String: %s",str);
	return 0;
}
