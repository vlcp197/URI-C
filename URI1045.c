#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,aux;
    scanf("%lf%lf%lf",&a,&b,&c);
    
    if (b > a){
        aux = b;
        b = a;
        a = aux;
    }
    if (c > a){
        aux  = c;
        c = a;
        a = aux;
    }
    if (c > b){
        aux = c;
        c = b;
        b = aux;
    }

    if (a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(a,2) == pow(b,2) + pow(c,2)){
            printf("TRIANGULO RETANGULO\n");
        }
        if (pow(a,2)>pow(b,2)+pow(c,2)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (pow(a,2)<pow(b,2)+pow(c,2)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ((a==b)&&(a==c)){
            printf("TRIANGULO EQUILATERO\n");
        }
        if (((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(c!=a))){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
 return 0;
}