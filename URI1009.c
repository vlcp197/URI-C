#include <stdio.h>

int main(){
	char nome[256];
	double salario,mon,total;
	scanf("%s",nome);
	scanf("%lf",&salario);
	scanf("%lf",&mon);
	total = ((mon *0.15) + salario);

	printf("TOTAL = R$ %.2f\n",total);

	return 0;

}