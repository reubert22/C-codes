#include <stdio.h>


int fatorialR(int n){
	if(n == 0)
		return 1;
	else
		return n*fatorialR(n-1);
	
}
int fatorialSemR(int j){
	int result,somador;
	int fat;
	
	for(fat = 1; j>1; j--){
		fat *= j;
	}
	return fat;
}
int main(){
	int n,j;
	int fatR,fatSR;
	n = 4;
	j = 5;
	
	fatR = fatorialR(n);
	fatSR = fatorialSemR(j);
	
	printf("Fatorial de %d: %d\n",n,fatR);
	printf("Fatorial de %d: %d",j,fatSR);
	
return 0;
}
/*
* Vers�o de recursividade � mais lento pelo fato de usar a pilha, e tamb�m usa mais mem�ria para manter a pilha
* por�m ela � bem mais simples de ser escrita, por exemplo fatorial, ou seja, de mais f�cil implementa��o.
*/

