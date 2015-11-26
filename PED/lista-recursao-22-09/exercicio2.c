#include <stdio.h>

int fibonacciRecursivo(int j){
	int cont=0;
	if(j == 1 || j == 2){
		return 1;
	}
	if(cont == j){
		return 1;
	}else{
		cont++;
		return fibonacciRecursivo(j-1)+fibonacciRecursivo(j-2);
	}
}
int fibonacciSemRecursividade(int n){
	int soma=0,
		fib1=1,
		fib2=1,
		auxiliar;
	if(n == 1 || n == 2){
		return 1;
	}
	int i;
	for(i=3; i<n; i++){
		soma = fib1 + fib2;
		fib1 = fib2;	
		fib2 = soma;
	}
	auxiliar = fib1+fib2;
	return auxiliar;
}
int main(){
	int fiboR,fiboSR;
	int i,j;
	
	i = 4;
	j = 10;
	
	fiboR = fibonacciRecursivo(j);
	fiboSR = fibonacciSemRecursividade(i);
	
	printf("fibonacci de %d: %d\n",i,fiboSR);
	printf("fibonacci de %d: %d",j,fiboR);
return 0;
}
