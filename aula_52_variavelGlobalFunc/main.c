#include <stdio.h>

int gVariavelGlobal = 2;

int main(){

    void test (void);
    test();
    test();

    printf("%i\n",  gVariavelGlobal); 


    return 0;
}

void test(void){

    int var = 2; // variavel local, toda vez q é chamada os valores anteriores atribuidos é zero 
    var *= 2;
    printf("%d\n", var);
    gVariavelGlobal *=2;

    return 0;
}


/*
quando a variavel global é chamada mais de uma vez ela não perde seu valor anterior, ou seja, se ela vale dois e for multiplicada por 2 e ser chamada duas vezes via multiplicar por 2 duas vzs.
*/