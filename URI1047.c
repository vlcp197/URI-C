#include <stdio.h>

int main(){
    int x[4],i,h,m; 

    
    for (i = 0;i < 4;i++){
        scanf("%i",&x[i]);
    }
    h = x[2] - x[0];
    m = x[3] - x[1];
  
    if((x[0] == x[1]) && (x[0] == x[2])&&(x[0]==x[3])){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        if (x[3] < x[1]){
            h = h - 1;
            m = 60 + m;
        }
        if (h < 0){
            h =  24+h;
        }
        printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",h,m);
    }
    return 0;
}

  