#include <stdio.h>
int main(){
int y, *p, x;
y = 0; // y recebe 0
p = &y;// ponteiro p recebe o endereçamento da variável y que contem 0 em seu conteúdo
x = *p;// x recebe o conteudo do ponteiro p, que seria o enderecamento de y
x = 4;// alteramos e x recebe 4
(*p)++;
x--;
(*p) = (*p) + x;
printf ("y = %d\n", y);
return 0;
}
//Saida: y = 4
 
 /*ESTAMOS MECHENDO INDIRETAMENTE NO VALOR DE Y QUE NO INICIO RECEBE 0, E COM RECEBIMENTO DE ENDEREÇO, INCREMENTO, DECREMENTO, TEMOS RESULTADO Y=4*/
