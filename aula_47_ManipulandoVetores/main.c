#include <stdio.h>

int main(void){


    printf("Digite 5 notas: \n");

    float nota[5] = {0};

    for (int i = 0; i < 5 ; ++i)
        scanf("%f", &nota[i]);

    float media;

    for (int i = 0; i < 5; ++i)    
        media += nota[i];
    
    
    printf("A média do aluni foi %f\n", media/5);


    return 0 ;

}