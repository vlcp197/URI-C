#include <stdio.h>

int main(){
    int multiple[2];
    scanf("%i%i",&multiple[0],&multiple[1]);

    if((multiple[0]%multiple[1]==0)||(multiple[1]%multiple[0]==0)){
        printf("Sao Multiplos\n");
    } else{
        printf("Nao sao Multiplos\n");
    }
    return 0;
}