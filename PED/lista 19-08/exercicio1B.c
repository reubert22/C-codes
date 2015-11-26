#include <stdio.h>
#include <string.h>
int main() {
char str1[10], str2[10];
printf("Entre com uma string: ");
gets(str1);
//str2 = str1; uma string não pode receber a outra desta maneira, logo temos que usar strcpy
strcpy(str2,str1);
printf("%s\n", str2);
return 0;
}
