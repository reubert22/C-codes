#include <stdio.h>
#include <locale.h>
#include <string.h>

void colocaAcentos();
int palindrome(char text[]);

int main(){
	char text[30];
	printf("Digite a palavra: ");
	gets(text);
	palindrome(text);
	
return 0;
}
void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
int palindrome(char text[]){
	colocaAcentos();
	int i,j;
	for(i = 0, j = strlen(text)-1; i <= j; i++, j--){
    	if(i == j){
      		break;
   		}

    if(text[i] != text[j]){
      printf("%s não é palindrome. \n", text);
      return 0;
    }

  }
  printf("%s é palíndrome. \n", text);
}
