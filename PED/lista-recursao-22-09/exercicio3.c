#include <stdio.h>

int binarioR(int num){
	if(num/2 == 0){
		printf("%d",num);
		return 1;  
	}else{
		binarioR(num/2);
		printf("%d",num%2); // a cada volta ele imprime 0 ou 1 de acordo com o resto %.
	}
}
int main(){
	int numero;
	printf("digite o numero: ");scanf("%d",&numero);
	binarioR(numero);
	
return 0;
}
