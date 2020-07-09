#include <stdio.h>

int main (){

    void test (void);
    test();



    return 0;
}

void test(void){

    int var = 2; // variavel local, toda vez q é chamada os valores anteriores atribuidos é zero 
    var *= 2;
    printf("%d\n", var);


    return 0;
}