#include <stdio.h>
#include <stdlib.h>

int main(){
    int age, years, months, days,remainder;

    scanf("%i",&age);
    years = age / 365;
    remainder = age % 365;
    months = remainder / 30;
    days = age - ((months * 30 + years *365));

    printf("%i ano(s)\n",years);
    printf("%i mes(es)\n",months);
    printf("%i dia(s)\n",days);

    return 0;

}