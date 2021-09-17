#include <stdio.h>
#include <stdlib.h>
int MaiorAB(int x, int y){
    int k;

    k = (x+y+abs(x-y))/2;
          
    return k;
}

int main(){
    int a,b,c;

    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);

    a = MaiorAB(a,b);

    if (a > c){
        printf("%i eh o maior\n",a);
    } else {
        printf("%i eh o maior\n",c);
    }

    return 0;

}