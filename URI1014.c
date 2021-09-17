#include <stdio.h>

double kml(int x,double y){
    double z;

    z = x / y;

    return z;
}

int main(){

    int a;
    double b,c;

    scanf("%i",&a);
    scanf("%lf",&b);

    c = kml(a,b);
    
    printf("%.3f km/l\n",c);

    return 0;    
}