#include <stdio.h>
#define HORAS 3600
#define MINUTO 60
void converteSegundos(int horas, int minutos, int segundos){
	int resultHora  = horas * HORAS;
	int resultMin   = minutos * MINUTO;
	int resultFinal = segundos + resultMin + resultHora;
	
	printf("O horario em segundos e igual a: %d seg.",resultFinal);
}
int main(){
	int hora,minuto,segundo;
	
	printf("Digite a hora: "); scanf("%d",&hora);
	printf("Digite o minuto: "); scanf("%d",&minuto);
	printf("Digite o segundo: "); scanf("%d",&segundo);
	
	converteSegundos(hora,minuto,segundo);
	
	return 0;
}
