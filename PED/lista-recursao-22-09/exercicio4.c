#include <stdio.h>
#include <math.h>

int nEsimo(int a,int n){
	int cont=0;
	if(cont == n){
		return 1;
	}else{
		cont++;
		return a*nEsimo(a,n-1);
	}
}
int main(){
	int a,n,result;
	printf("Digite a base (a): ");scanf("%d",&a);
	printf("Digite o expoente (n): ");scanf("%d",&n);
	result = nEsimo(a,n);
	
	printf("Resultado: %d",result);
	
return 0;
}
