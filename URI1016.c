#include <stdio.h>

int minutes(int dist){
    int min = dist * 2;
    return min;
}

int main(){
    int x,y;

    scanf("%i",&x);
    y = minutes(x);

    printf("%i minutos\n",y);
        

    return 0;
}