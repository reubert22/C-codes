#include <stdio.h>
#include <math.h>
#include <locale.h>
void colocandoAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
int main(){
	colocandoAcentos();
	float imc,peso,altura;
	char option;
	float elevado;
	
	printf("Escolha a opção:\n"
			"[1] Homem\n"
			"[2] Mulher\n");
	option = getchar();
	switch(option){
		case '1':
			printf("Digite seu peso: ");
			scanf("%f",&peso);
			printf("\nDigite sua altura: ");
			scanf("%f",&altura);
			elevado = pow(altura,2);
			imc = peso/elevado;
			if(imc < 19.1){
				printf("Abaixo do peso.\n");
			}else if(imc >= 19.1 && imc <= 25.8){
				printf("Peso Normal.\n");
			}else if(imc > 25.8 && imc <= 27.3){
				printf("Marginalmente acima do peso.\n");
			}else if(imc > 27.3 && imc <= 32.3){
				printf("Acima do peso ideal.\n");
			}else if(imc > 32.3){
				printf("Obeso.\n");
			}
		break;
		case '2':
			printf("Digite seu peso: ");
			scanf("%f",&peso);
			printf("\nDigite sua altura: ");
			scanf("%f",&altura);
			elevado = pow(altura,2);
			imc = peso/elevado;
			if(imc < 20.7){
				printf("Abaixo do peso.\n");
			}else if(imc >= 20.7 && imc <= 26.4){
				printf("Peso Normal.\n");
			}else if(imc > 26.4 && imc <= 27.8){
				printf("Marginalmente acima do peso.\n");
			}else if(imc > 27.8 && imc <= 31.1){
				printf("Acima do peso ideal.\n");
			}else if(imc > 31.1){
				printf("Obeso.\n");
			}
		break;
		default:
			printf("Opção inválida!"); 
	}
	return 0;
}
