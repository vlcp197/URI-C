#include <stdio.h>

int main(){
    int start, end,total;

    scanf("%i%i",&start,&end);

    if (start > end){
        total = 24 - start + end;
        printf("O JOGO DUROU %i HORA(S)\n",total);
    } else {
        if (end > start){
            total = end - start;
            printf("O JOGO DUROU %i HORA(S)\n",total);
        } else {
            if (start == end){
                printf("O JOGO DUROU 24 HORA(S)\n");
            }
        }
    }


    return 0;
}