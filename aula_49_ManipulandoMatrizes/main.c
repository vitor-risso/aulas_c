#include <stdio.h>

int main(){

    int matriz [3] [3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    for (int i = 0; i < 3; ++i)
    {
        for (int n = 0; n < 3; ++n)
        {
            printf("%d ", matriz [i] [n]);
        }
        
        printf("\n");
    }
    
    /* qunaod a instrução entrar no primeiro for ela vai ficar rodando até n = 3 depois ela sai pula uma linha e i vai ficar igual a 1 q vai para a segunda linha e se repete .  Lmebrando q tudo comaça no zero por isso menor que 3 se fosse menor igual usariamos uma mariz q n existe nesse caso*/

    /*tbm pode ser usado o scanf pra digitarmos valores de matrizes e armezenalos a memoria*/



    return 0;
}