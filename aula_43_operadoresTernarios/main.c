#include <stdio.h>
#include <stdlib.h>

int main(){

    /*

        operação ? valorTrue : valorFalse;

        <variave> = (true) ? 10 :20;

        x== 10 ? x=10 : x=20;
    
    */

   int x,y;


/*
   scanf("%d", &x);

   if (x <10)
        y = 0;
    else 
        y =x;

     printf("%d", y);   
*/

// ================ou============

scanf("%i", &x);


y = (x<0) ? 0 : x; 

printf("%i", y);


    return 0;
}