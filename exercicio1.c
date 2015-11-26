#include <stdio.h>
#include <math.h>
#define PI 3.14

float calculaVolume(float raio){
	float volume;
	float elevado;
	elevado = pow(raio,3);
	volume = (4*PI*elevado)/3;
	
	return volume;
}
int main(){
	float raio;
	float resposta;
	
	printf("Digite o raio desejado: ");
	scanf("%f",&raio);
	resposta = calculaVolume(raio);
	printf("O volume e aproximadamente igual a: %.2f",resposta);
	
	return 0;
}
