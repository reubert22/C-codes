#include <stdio.h>
#include <string.h>
int main(){
	char str1[100],str2[100];
	printf("Informe a primeira palavra: ");
	scanf("%s", &str1);
	printf("Informe a segunda palavra: ");
	scanf("%s", &str2);
	puts("Ordenando...");
	if(str1[0] < str2[0]){
		printf("%s %s",str1,str2);
	}else if(str1[0] > str2[0]){
		printf("%s %s",str2,str1);
	}else if(str1[0] == str2[0]){
		if(str1[1] < str2[1]){
			printf("%s %s",str1,str2);
		}
	}
}
