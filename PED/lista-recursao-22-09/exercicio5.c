#include <stdio.h>

int naturais(int n){
	while(n == 0){
		return 1;
	}
	printf("%d ",n);
	return naturais(n-1);
}
int main(){
	int i;
	printf("Introduza um numero: ");
	scanf("%d",&i);
	printf("Em ordem decrescente:\n");
	naturais(i);
	
return 0;
}
