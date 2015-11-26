#include <stdio.h>
int main(){
	char caractere;
	unsigned char uchar;
	signed char schar;
	int inteiro;
	short int sint;
	long int lint;
	float flutuante;
	double dDouble;
	
	int a = sizeof(char);
	int b = sizeof(unsigned char);
	int c = sizeof(signed char);
	int d = sizeof(int);
	int e = sizeof(short int);
	int f = sizeof(long int);
	int g = sizeof(float);
	int h = sizeof(double);
	
	
	
	printf("Tamanho de char: %d\nTamanho do unsigned char: %d\nTamanho do signed char: %d\nTamanho do int: %d\nTamanho do short int: %d\nTamanho do long int: %d\nTamanho do float: %d\nTamanho do double: %d\n", a, b, c, d, e, f, g, h);
}
