#include <stdio.h>

void matrizTransposta(int a[][3]){
	int b[3][3];
	int i,j;
	for(i=0; i<10; i++){
		for(j=0; j<4; j++){
			b[j][i] = a[i][j];
		}
	}
	for(i=0; i<10; i++){
		for(j=0; j<4; j++){
			printf("%d",a[i][j]);
		}
		putchar('\n');
	}
	for(i=0; i<10; i++){
		for(j=0; j<4; j++){
			printf("%d",b[i][j]);
		}
		putchar('\n');
	}
}
int main(){
	int a[3][3];
	int i,j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			a[i][j] = i+j;
		}
	}
	matrizTransposta(a);
return 0;
}
