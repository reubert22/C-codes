#include <stdio.h>
#include <locale.h>
void colocandoAcentos(){
	setlocale(LC_ALL,"Portuguese");
}
int main(){
	colocandoAcentos();
	float notas[10][3];
	int i,j;
	int contador_p=0,contador_s=0,contador_t=0;
	float primNota, segNota, terNota;
	for(i=0;i<10;i++){
		for(j=0;j<3;j++){
			printf("Aluno: [%d] Digite sua nota na [%d] prova: ",i+1,j+1);
			scanf("%f",&notas[i][j]);
			primNota = notas[i][0];
			segNota  = notas[i][1];
			terNota  = notas[i][2];
		}
		if(primNota < segNota && primNota < terNota){
			contador_p += 1;
		}else if(segNota < primNota && segNota < terNota){
			contador_s += 1;
		}else if(terNota < primNota && terNota < segNota){
			contador_t += 1;
		}else if(primNota == segNota && primNota < terNota){
			contador_p += 1;
			contador_s += 1;
		}else if(primNota == terNota && primNota < segNota){
			contador_p += 1;
			contador_s += 1;
		}else if(segNota == terNota && segNota < primNota){
			contador_s += 1;
			contador_t += 1;
		}
		//printf("Notas aluno [%d]: 1=%.2f 2=%.2f 3=%.2f\n",i+1,primNota,segNota,terNota);
	}
	printf("Números de alunos cuja pior nota foi na primeira avaliação: %d\n",contador_p);
	printf("Números de alunos cuja pior nota foi na segunda avaliação: %d\n",contador_s);
	printf("Números de alunos cuja pior nota foi na terceira avaliação: %d\n",contador_t);
	return 0;
}
