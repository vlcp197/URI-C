#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double quadratic(double a, double b, double c,
double* r1, double* r2,double* i){
    double delta;

    delta = pow(b,2)-4*a*c;

    if (delta > 0 && a != 0){
        *r1 = ((-1*b + sqrt(delta))/(2*a));
        *r2 = ((-1*b - sqrt(delta))/(2*a));
    } else {
        *i = 0.0;
    }
    
}

int main(){
    double x,y,z,root1,root2;
    double j;
    scanf("%lf%lf%lf",&x,&y,&z);

    quadratic(x,y,z,&root1,&root2,&j);
    
    if (j == 0.0){
        printf("Impossivel calcular\n");
    } else {
        printf("R1 = %.5f\n",root1);
        printf("R2 = %.5f\n",root2);
    }
    

    return 0;
}
