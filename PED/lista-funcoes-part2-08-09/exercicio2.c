#include <stdio.h>

void maiorMenor(int a,int b,int c, int *maior, int *menor){
	if(a > b && a > c){
	  		*maior = a;
	  	if(b < c){
	    	*menor = b;
	  	}else{
	  		*menor = c;
	  	}
	}else if(b > c && b > a){
	  		*maior = b;
	  	if(a < c){
	  		*menor = a;
		}else{
		  	*menor = c;
		}
	}else if(c > a && c > b){
	  		*maior = c;
	  	if(a < b){
	  		*menor = a;
		}else{
		  *menor = b;
		}
	}	
   
}
int main(){
	int a,b,c;
	int maior;
	int menor;
	printf("Digite A: "); scanf("%d",&a);
	printf("Digite B: "); scanf("%d",&b);
	printf("Digite C: "); scanf("%d",&c);
	maiorMenor(a,b,c,&maior,&menor);
	
	printf("Maior: %d\n",maior);
	printf("Menor: %d",menor);
	return 0;
}
