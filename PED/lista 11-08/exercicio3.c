#include <stdio.h>
#include <locale.h>
void colocandoAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
int main(){
	colocandoAcentos();
	int option;
	float primNumero,segNumero,resultado;
	int prim_numero, seg_numero,result;
	int condition=1;
	while(condition != 0){
	printf("Digite a op��o desejada:\n");
	printf( "[+] Soma\n"
			"[-] Subtra��o\n"
			"[*] Multiplica��o\n"
			"[/] Divis�o\n"
			"[%%] Resto da Divis�o\n"
			"[x] Sair\n");
	fflush(stdin);
	option = getchar();
	switch(option){
		case '+':
			printf("Digite o primeiro n�mero: "); scanf("%f",&primNumero);
			printf("Digite o segundo n�mero: "); scanf("%f",&segNumero);
			resultado = primNumero + segNumero;
			printf("A soma de %.2f + %.2f = %.2f\n",primNumero,segNumero,resultado);
		break;
		case '-':
			printf("Digite o primeiro n�mero: "); scanf("%f",&primNumero);
			printf("Digite o segundo n�mero: "); scanf("%f",&segNumero);
			resultado = primNumero - segNumero;
			printf("A subtra��o de %.2f - %.2f = %.2f\n",primNumero,segNumero,resultado);
		break;
		case '*':
			printf("Digite o primeiro n�mero: "); scanf("%f",&primNumero);
			printf("Digite o segundo n�mero: "); scanf("%f",&segNumero);
			resultado = primNumero * segNumero;
			printf("A multiplica��o de %.2f * %.2f = %.2f\n",primNumero,segNumero,resultado);
		break;
		case '/':
			printf("Digite o primeiro n�mero: "); scanf("%f",&primNumero);
			printf("Digite o segundo n�mero: "); scanf("%f",&segNumero);
			if(segNumero != 0){
				resultado = primNumero / segNumero;
				printf("A divis�o de %.2f / %.2f = %.2f\n",primNumero,segNumero,resultado);
			}else{
				printf("Error!\n");
			}
		break;
		case '%':
			printf("Digite o primeiro n�mero: "); scanf("%d",&prim_numero);
			printf("Digite o segundo n�mero: "); scanf("%d",&seg_numero);
			if(segNumero != 0){
				result = prim_numero % seg_numero;
				printf("O resto de %d e %d = %d\n",prim_numero,seg_numero,result);
			}else{
				printf("Error!");
			}
		break;
		case 'x':
			condition = 0;
		break;
		default:
			printf("Op��o inv�lida!\n");
	}
	}
}
