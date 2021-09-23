#include <stdio.h>
#include <stdlib.h>

double grade(double n1,double n2,
double n3,double n4,double* final){
    *final = (n1*2+n2*3+n3*4+n4)/10.0;

    return *final;
}

int main(){
    double a,b,c,d,final,exam;
    
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

    final = grade(a,b,c,d,&final);
     
    if (final >= 7.0){
        printf("Media: %.1f\n",final);
        printf("Aluno aprovado.\n");
    } else {
        if (final >= 5.0 && final <= 6.9){
             printf("Media: %.1f\n",final);
             printf("Aluno em exame.\n");
             scanf("%lf",&exam);
             printf("Nota do exame: %.1f\n",exam);
             final = (final + exam)/2.0;
             if (final > 5){
                 printf("Aluno aprovado.\n");
                 printf("Media final: %.1f\n",final);
             } else {
                 printf("Aluno reprovado.\n");
                 printf("Media final: %.1f\n",final);
             }
            
        } else {
            printf("Media: %.1f\n",final);
            printf("Aluno reprovado.\n");
        }
    }

    return 0;
}