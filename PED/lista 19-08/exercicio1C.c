#include <stdio.h>
#include <string.h>
int main() {
char str1[10] = "Ana ";
char str2[10] = "Paula";
char str3[30];
//str3 = str1 + str2; CONCATENAÇÃO DE STRINGS NÃO PODE SER FEITA DESTA MANEIRA, TEMOS QUE USAR STRCAT
strcat(str1,str2);
strcat(str3,str1);
puts(str3);
return 0;
}
