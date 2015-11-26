#include <stdio.h>
#include <locale.h>
void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
int main(){
	colocaAcentos();
	int num = 100;
	int *pont;
	pont = &num;
	printf("Valor em num anterior a mudança: %d\n",num);
	*pont = 120;
	printf("Valor de num após a mudança: %d",num);
}
