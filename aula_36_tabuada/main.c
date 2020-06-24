#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero = 0;
     
    printf("\nDigite o número cujo o qual você quer a tabuada: ");
    scanf("%i", &numero);

    for ( int x =1 ; x <= 20 ; x++ ){

        printf("%i x %i = %i \n", numero, x, numero * x ); 

    }



    return 0;
}