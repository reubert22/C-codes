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
		printf("[1] A raiz quadrada desse numero\n[2] Tabuada de 1 at� %d\n[3] A soma de todos numeros entre 0 e %d\n[4] Sair do programa\n",numeroFornecido,numeroFornecido);
		printf("Escreva a op��o desejada: ");
		scanf("%d",&opcaoDesejada);
			switch(opcaoDesejada){
				case 1:
					resultado = sqrt(numeroFornecido);
					printf("Raiz quadrada de %d � %.2f\n", numeroFornecido, resultado);
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
					printf("Op��o inv�lida!\n");
			}
	printf("Digite um numero inteiro positivo: ");
	scanf("%d",&numeroFornecido);
	}
}
