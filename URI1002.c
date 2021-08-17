#include <stdio.h>


int main(){
	double raio;
	double area;
	double n = 3.14159;

	scanf("%lf",&raio);

	area = (n*(raio*raio));
	printf("A=%.4lf\n", area);

	return 0;
}