#include <stdio.h>

int main(){

    float areaQuadradaRetangulo(float base , float altura);
    float area = areaQuadradaRetangulo(10.0 , 20.5); // variavel é igual a função 

    printf("A área é %.2f\n", area);

    return 0;
}

float areaQuadradaRetangulo (float base, float altura){

    float area = base * altura;
    printf("%f\n", area);

    return area ;
}