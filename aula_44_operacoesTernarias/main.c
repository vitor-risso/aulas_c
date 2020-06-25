#include <stdio.h> 
#include <stdlib.h>

int main(){

    printf("Digite uma letra entre A e D: ");
    char caracter = 0;
    scanf("%c", &caracter);

    int codigo = 0;

/*
    switch (caracter){

        case 'A':
            codigo = 65;
            break;
        
         case 'B':
            codigo = 66;
            break;

         case 'C':
            codigo = 67;
            break;

         case 'D':
            codigo = 68;
            break;      

        default:
            codigo = -1;


    }

*/

    codigo = (caracter == 'A') ? 65 :
             (caracter == 'B') ? 66 : 
             (caracter == 'C') ? 67 :
             (caracter == 'D') ? 68 : -1;


    printf("O código da letra é: %i\n", codigo); 


    return 0;
}