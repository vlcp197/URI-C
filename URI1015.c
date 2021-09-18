#include <stdio.h>
#include <math.h>

double distance(double x1,double y1,double x2,double y2){
    double z;

    z = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    return z;
}

int main(){
    double a1,b1,a2,b2;
    double c;

    scanf("%lf",&a1);
    scanf("%lf",&b1);
    scanf("%lf",&a2);
    scanf("%lf",&b2);

    c = distance(a1,b1,a2,b2);

    printf("%.4f\n",c);

    return 0;
}