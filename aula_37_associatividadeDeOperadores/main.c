#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
    ====da esquerda para a direita===
    1 -> ()
    2 -> *,/,%
    3 -> +,-
    4-> >, <, >= , <= 
    5 -> == , != 

    === da direita para a esquerda ===
    1 -> --, ++
    2 -> = , += , -= , =/, *= , %= 


    */

   int a,b,c;
   a = (b = (c =1)); //= vai da direita pra esquerda;
   printf("%d\n", a);
   printf("%d\n", b);
   printf("%d\n", c);


    return 0;
}