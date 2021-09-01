#include <stdio.h>

int main(){
	int num,hora;
	double valor,total;

	scanf("%i",&num);
	scanf("%i",&hora);
	scanf("%lf",&valor);

	total = valor * hora;

	printf("NUMBER = %i\n",num);
	printf("SALARY = U$ %.2lf\n",total);

	return 0;
}