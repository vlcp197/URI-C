#include <stdio.h>
#include <stdlib.h>

int selection(int a,int b,int c,int d){
    if ((b > c && d > a) && ((c + d)>(a + b)) 
    && c > 0 && d > 0 && a % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int j,k,l,m,x;

    scanf("%i",&j);
    scanf("%i",&k);
    scanf("%i",&l);
    scanf("%i",&m);

    x = selection(j,k,l,m);

    if (x == 1){
        printf("Valores aceitos\n");
    } else{
        printf("Valores nao aceitos\n");
    }

    return 0;
}