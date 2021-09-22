#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

double price(int code, int amount,double* total){

    switch(code){
        case 1:
            *total = amount * 4;
        break;
        case 2:
            *total = amount * 4.5;
        break;
        case 3:
            *total = amount * 5;
        break;
        case 4:
            *total = amount * 2;
        break;
        case 5:
            *total = amount * 1.5;
        break;
        default:
            *total = 0;
    }
    
    return *total;


}



int main(){
    int codeX,amountX;
    double totalX;

    scanf("%i%i",&codeX,&amountX);

    totalX = price(codeX,amountX,&totalX);

    if (totalX == 0){
        printf("Valor inválido");
    } else {
        printf("Total: R$ %.2f\n",totalX);
    }
    

    return 0;
}