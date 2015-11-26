#include <stdio.h>
#include <math.h>
#include <locale.h>

void colocaAcentos(){
	setlocale(LC_ALL,"Portuguese");
}

void calculaTriangulo(int x, int y, int z){
	colocaAcentos();
	if(x == y && y == z){
		printf("Triangulo Equilatero, lados iguais.");
	}else if(x == y || y == z || x == z){
		printf("Triângulo Isósceles, dois lados iguais.");
	}else if(x != y && y != z){
		printf("Triângulo Escaleno, todos lados diferentes");
	}
}

int main(){
	int x,y,z;
	printf("Digite o lado X: ");scanf("%d",&x);
	printf("Digite o lado Y: ");scanf("%d",&y);
	printf("Digite o lado Z: ");scanf("%d",&z);
	calculaTriangulo(x,y,z);
	
	return 0;
}
