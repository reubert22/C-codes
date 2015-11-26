#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	float xa;
	float ya;
}coordenadas;

float elevaAoQuadrado(float j){
	int result;
	result = pow(j,2);
	
	return result;
}
float calculaDistancia(float xa, float ya, float xb, float yb){
	float distancia;
	float xamenosxb = xa-xb;
	float yamenosyb = ya-yb;
	distancia = sqrt(elevaAoQuadrado(xamenosxb) + elevaAoQuadrado(yamenosyb));
	
	return distancia;
}
int main(){
	coordenadas cord;
	cord.xa = 2;
	cord.ya = 4;
	float xb,yb;
	float result;
	
	printf("Digite Xb: ");scanf("%f",&xb);
	printf("Digite Yb: ");scanf("%f",&yb);
	
	result = calculaDistancia(cord.xa,cord.ya,xb,yb);
	printf("Resultado: ",result);
	
	return 0;
}
