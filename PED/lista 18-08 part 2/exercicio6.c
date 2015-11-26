#include <stdio.h>
#include <math.h>
#include <locale.h>
void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
void limpaBufferT(){
	fflush(stdin);
}
int main(){
	int numeroFornecido;
	int opcaoDesejada;
	float resultado;
	int i;
	int contador = 0;
	int soma = 0;
	
	colocaAcentos();
	limpaBufferT();
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d",&numeroFornecido);
	while(numeroFornecido > 0){
		limpaBufferT();
		printf("[1] A raiz quadrada desse numero\n[2] Tabuada de 1 até %d\n[3] A soma de todos numeros entre 0 e %d\n[4] Sair do programa\n",numeroFornecido,numeroFornecido);
		printf("Escreva a opção desejada: ");
		scanf("%d",&opcaoDesejada);
			switch(opcaoDesejada){
				case 1:
					resultado = sqrt(numeroFornecido);
					printf("Raiz quadrada de %d é %.2f\n", numeroFornecido, resultado);
				break;
				case 2:
					for(i=0; i<=numeroFornecido; i++){
						printf("%3d * %3d = %3d\n",i,numeroFornecido, i*numeroFornecido);
					}
				break;
				case 3:
					while(contador <= numeroFornecido){
						soma += contador;
						contador++;
					}
					printf("Soma: %d \n", soma);
				break;
				case 4:
					return 0;
				break;
				default:
					printf("Opção inválida!\n");
			}
	printf("Digite um numero inteiro positivo: ");
	scanf("%d",&numeroFornecido);
	}
}
