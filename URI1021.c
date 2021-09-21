#include <stdio.h>
#include <stdlib.h>

int main(){
    int n100,n50,n20,n10,n5,n2;
    int c100,c050,c025,c010,c005,c001;
    int remainder, low,remainderlow;
    double cash,l;

    scanf("%lf", &cash);

    int money = (int) cash;

    l = cash * 100;
    
    n100 = money / 100;
    remainder = money % 100;
    n50 = remainder / 50;
    remainder = remainder % 50;
    n20 = remainder / 20;
    remainder = remainder % 20;
    n10 = remainder / 10;
    remainder = remainder % 10;
    n5 = remainder / 5;
    remainder = remainder % 5;
    n2 = remainder / 2;
    remainder = remainder % 2;

    low = (((int) l) % 100) + remainder*100;
    
    c100 = low / 100;
    remainderlow = low % 100;
    c050 = remainderlow / 50;
    remainderlow = remainderlow % 50;
    c025 = remainderlow / 25;
    remainderlow = remainderlow % 25;
    c010 = remainderlow / 10;
    remainderlow = remainderlow % 10;
    c005 = remainderlow / 5;
    remainderlow = remainderlow % 5;
    c001 = remainderlow / 1;

    printf("NOTAS:\n");
    printf ("%i nota(s) de R$ 100.00\n",n100);
    printf ("%i nota(s) de R$ 50.00\n",n50);
    printf ("%i nota(s) de R$ 20.00\n",n20);
    printf ("%i nota(s) de R$ 10.00\n",n10);
    printf ("%i nota(s) de R$ 5.00\n",n5);
    printf ("%i nota(s) de R$ 2.00\n",n2);

    printf("MOEDAS:\n");
    printf ("%i moeda(s) de R$ 1.00\n",c100);
    printf ("%i moeda(s) de R$ 0.50\n",c050);
    printf ("%i moeda(s) de R$ 0.25\n",c025);
    printf ("%i moeda(s) de R$ 0.10\n",c010);
    printf ("%i moeda(s) de R$ 0.05\n",c005);
    printf ("%i moeda(s) de R$ 0.01\n",c001);

    return 0;
}