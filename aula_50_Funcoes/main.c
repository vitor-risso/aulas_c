#include <stdio.h>

int main (){

    void imprimeMengasemg(void); // sempre declarar dentro do main por questoes de legibilidade
    imprimeMensagem();
    return 0;
}

void imprimeMensagem(void){

    printf("teste.\n");



}

/*
    tem q mandar executar a função no int main pois o programa so roda o q ta dentro dele. Portanto temos q colocar o nome da função com ; no final.
    por ex:
    int main (){

            //agr tem q puxar a funcção
            imprimeMensagem

        return 0;
    }
    void impirmeMensagem(void){



    }
*/