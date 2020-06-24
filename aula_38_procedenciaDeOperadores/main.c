#include <stdio.h>
#include <stdlib.h>

int main(){
    int a , b,  c;
    a = 10;
    b= 5;
    c=7;

    float x=0;
 
    x= a*b-c;
    printf("O vvalor de x é %f\n", x);

     x= a*(b-c);
    printf("O vvalor de x é %f\n", x);

     x= a+b*c;
    printf("O vvalor de x é %f\n", x);

     x= a/b-c;
    printf("O vvalor de x é %f\n", x);

     x= a/(b-c);
    printf("O vvalor de x é %f\n", x);


    return 0;
}