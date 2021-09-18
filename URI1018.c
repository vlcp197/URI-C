#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int amount;
    int c100,c50,c20,c10,c5,c2,c1,remainder;

    scanf("%i",&amount);

    c100 = amount / 100;
    remainder = amount % 100;
    c50 = remainder / 50;
    remainder = remainder % 50;
    c20 = remainder / 20;
    remainder = remainder % 20;
    c10 = remainder / 10;
    remainder = remainder % 10;
    c5 = remainder / 5;
    remainder = remainder % 5;
    c2 = remainder / 2;
    remainder = remainder % 2;
    c1 = remainder / 1;
    
    
    printf("%i\n",amount);
    printf("%i nota(s) de R$ 100,00\n",c100);
    printf("%i nota(s) de R$ 50,00\n",c50);
    printf("%i nota(s) de R$ 20,00\n",c20);
    printf("%i nota(s) de R$ 10,00\n",c10);
    printf("%i nota(s) de R$ 5,00\n",c5);
    printf("%i nota(s) de R$ 2,00\n",c2);
    printf("%i nota(s) de R$ 1,00\n",c1);
     
    return 0;
}

