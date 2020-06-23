#include <stdio.h>
#include <stdlib.h>

int main(){

int x, y, operation;

printf("(1) Soma\n");
printf("(2) Subtração\n");
printf("(3) Divisão\n");
printf("(4) Multiplicação\n");
printf("(0) Sair\n");
scanf("%i", &operation);



if (operation != 0){

    printf("Escolha o primerio Numero: \n\t\t>>>>");
    scanf("%d", &x);

    printf("Escolha o segudno numeor: \n\t\t>>>>");
    scanf("%d", &y);

   switch (operation)
   {
   case  1:
        printf("A soma é: \n\t\t>>>> %d \n", x + y);
       break;

    case 2:
    printf("A subtração é:\n \t\t>>>> %d \n", x - y);
    break;

    case 3:
        printf("A divisão é:\n \t\t >>>>%d \n", x / y);
        break;

    case 4:
    printf("A multiplicação é:\n \t\t >>>>%d\n", x * y);
    break;    
   
   default:
       break;
   }
    





}

    return 0;
}