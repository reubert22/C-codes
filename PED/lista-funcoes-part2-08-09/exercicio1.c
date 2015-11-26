#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void converteGraus(float *f,float *k,float c);

int main(){
	float f,k,c;
	printf("Digite quantos graus celsius>");
	scanf("%f",&c);
	converteGraus(&f,&k,c);
	printf("Graus Celsius: %.2f\n",c);
	printf("Kelvin: %.2f\n",k);
	printf("Fahrenheit: %.2f\n",f);
	
return 0;
}
void converteGraus(float *f,float *k,float c){
	*k = c + 273.15;
	*f = (c*1.8) + 32;
}
