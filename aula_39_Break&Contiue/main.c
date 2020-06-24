#include <stdio.h>
#include <stdlib.h>

int main(){

for (int  i = 0; i < 100 ; i++)
{
    
    if(i==20){ // vai voltar pro for ou seja cortar esse ciclo nao vai impimir o numero 20
        continue;
    }

    if (i ==80){ //qnd chegar em 80 o looping será quebrado

        break;
    }

    printf("%i\n", i);

}



    return 0;
}