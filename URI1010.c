#include <stdio.h>

int main(){
	int cod1, num1;
	int cod2,num2;
	double valor1,valor2,total;

	scanf("%i",&cod1);
	scanf("%i",&num1);
	scanf("%lf",&valor1);

	scanf("%i",&cod2);
	scanf("%i",&num2);
	scanf("%lf",&valor2);

	total = (num1*valor1) + (num2*valor2);

	printf("VALOR A PAGAR: R$ %.2lf\n",total);

	return 0;
}