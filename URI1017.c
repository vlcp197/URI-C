#include <stdio.h>

double liters(int time, int speed){
    double x;
    x = (time * speed)/12.0;

    return x;
}

int main(){
    int hour, velocity;
    double volume;
    scanf("%i",&hour);
    scanf("%i",&velocity);

    volume = liters(hour,velocity);

    printf("%.3f\n",volume);

    return 0;
}