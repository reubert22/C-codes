#include <stdio.h>

void main(){
	int auxiliar, i, n;
	int a = 0,
  	    b = 1;
	
    //SOLICITANDO O N-ÉSIMO
	printf("Digite um numero: ");
	scanf("%d", &n);
    
    //IMPRESSÃO DO PRIMEIRO NÚMERO = 1
	printf("Serie de Fibonacci:\n");
	printf("%d ", b);
	  
	//DECLARANDO UM VETOR DO TAMANHO QUE O USUARIO DIGITAR PARA RECEBER O TAMANHO CERTO
	int array[n];
	
	  //PREENCHENDO ARRAY
	  for(i = 0; i < n-1; i++){
	    auxiliar = a + b;
	    a = b;
	    b = auxiliar;
	    
	    array[i] = auxiliar;
	  }
	  //IMPRIMINDO VALORES DO ARRAY
	  for(i = 0; i < n-1; i++){
	  	printf("%d ",array[i]);
	  }
}
