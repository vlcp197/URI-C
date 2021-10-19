#include <stdio.h>

int main(){
    int x[3],y[3];
    int i,j,k;

    for (i = 0; i < 3;i++){
        scanf("%i",&x[i]);
    }
    
    if((x[0]==x[1])&&(x[0]==x[2])){
       for (k = 0; k < 3;k++){
            printf("%i\n",x[k]);
            printf("\n");
        } 
    } else {
        if(((x[0]==x[1])&&(x[0]>x[2]))||((x[0]>x[1])&&(x[1]>x[2]))){
            printf("%i\n%i\n%i\n",x[2],x[1],x[0]);
            printf("\n");
        } else {
            if(((x[0]==x[2])&&(x[2]>x[1]))||((x[0]>x[2])&&(x[2]>x[1]))){
                printf("%i\n%i\n%i\n",x[1],x[2],x[0]);
                printf("\n");
            } else {
                if(((x[1]==x[2])&&(x[1]>x[0]))||((x[1]>x[2])&&(x[2]>x[0]))){
                    printf("%i\n%i\n%i\n",x[0],x[2],x[1]);
                    printf("\n");
                } else {
                    if((x[2] > x[1])&&(x[1]>x[0])){
                        printf("%i\n%i\n%i\n",x[0],x[1],x[2]);
                        printf("\n");
                    } else {
                        if((x[2]>x[0])&&(x[0]>x[1])){ 
                            printf("%i\n%i\n%i\n",x[1],x[0],x[2]);
                            printf("\n");
                         } else {
                                if((x[1]>x[0])&&(x[0]>x[2])){
                                    printf("%i\n%i\n%i\n",x[2],x[0],x[1]);
                                    printf("\n");
                        }
                    }
                }
            }
        }
    }
    for (j = 0; j < 3;j++){
        printf("%i\n",x[j]);
        }
    }
    return 0;
}