#include <stdio.h>

int main(){

    const int NumeroDeAlunos = 4;
    const int NumeroDeBim = 4;

    float NotasDosAlunos [NumeroDeAlunos] [NumeroDeBim] ;
    float mediaAlunos [NumeroDeAlunos] ;

    float media = 0;

    printf("Digite as notas dos 4 bim.\n");

    for (int i = 0; i < NumeroDeAlunos; ++i)
    {
        for (int n = 0; n < NumeroDeBim; ++n)
        {
            scanf("%f", &NotasDosAlunos [i] [n]);
            media += NotasDosAlunos [i] [n] ;

        } 

        mediaAlunos [i] = media / NumeroDeBim ;
        
        media =0;

        printf("Digite a nota do aluno %d\n", i+2);
    }

    for (int i = 0; i < NumeroDeAlunos; ++i)
    {
        printf("A média do aluno %i é %.2f\n", i+1 , mediaAlunos[i]);
    }
    
    




    return 0;
}