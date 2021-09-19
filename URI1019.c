#include <stdio.h>
#include <stdlib.h>

int main(){
    int time, hours, minutes, seconds,remainder;

    scanf("%i",&time);

    hours = time/3600;
    remainder = time % 3600;
    minutes = remainder / 60;
    remainder = time % 60;
    seconds = remainder;

    printf("%i:%i:%i\n",hours,minutes,seconds);



    return 0;
}