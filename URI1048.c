#include  <stdio.h>

int main(){
    double income;
    int perc;

    scanf("%lf",&income);

    if (income >= 0 && income <= 400){
        perc = 15;
        printf("Novo salario: %.2f\n",income + 0.15*income);
        printf("Reajuste ganho: %.2f\n",income*1.15 - income);
        printf("Em percentual: %i %c\n",perc,37);
    }
     if (income >= 400.01 && income <= 800){
        perc = 12;
        printf("Novo salario: %.2f\n",income + 0.12*income);
        printf("Reajuste ganho: %.2f\n",income*1.12 - income);
        printf("Em percentual: %i %c\n",perc,37);
    }
     if (income >= 800.01 && income <= 1200){
        perc = 10;
        printf("Novo salario: %.2f\n",income + 0.1*income);
        printf("Reajuste ganho: %.2f\n",income*1.1 - income);
        printf("Em percentual: %i %c\n",perc,37);
    }
     if (income >= 1200.01 && income <= 2000){
        perc = 7;
        printf("Novo salario: %.2f\n",income + 0.07*income);
        printf("Reajuste ganho: %.2f\n",income*1.07 - income);
        printf("Em percentual: %i %c\n",perc,37);
    }
     if (income >2000){
        perc = 4;
        printf("Novo salario: %.2f\n",income + 0.04*income);
        printf("Reajuste ganho: %.2f\n",income*1.04 - income);
        printf("Em percentual: %i %c\n",perc,37);
    }
    return 0;
}
