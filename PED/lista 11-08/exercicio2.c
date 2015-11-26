#include <stdio.h>
#include <locale.h>
void colocandoAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
int main(){
	colocandoAcentos();
	int numero,soma;
	int contador;
	while(contador != 6){
		printf("Digite um número:");
		scanf("%d",&numero);
		if(numero % 2 == 0){
			soma += numero;
			contador++;
		}
	}
	printf("A soma dos 6 numeros pares: %d", soma);
}
