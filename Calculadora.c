#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int adicao (int x, int y) {
    return x+y;
};
int subtracao (int x, int y) {
    return x-y;
};
int divisao (int x, int y) {
    return x/y;
};
int multiplicacao (int x, int y) {
    return x*y;
};

int main (void){

int selecionar, x, y, resultado_da_soma, resultado_da_divisao, resultado_da_subtracao, resultado_da_multiplicacao;

printf("\nQual operacao voce deseja?\n 1 - soma \n 2 - subtracao \n 3 - divisao \n 4 - multiplicacao\n");
scanf("%d", &selecionar);

switch (selecionar) {

    case 1:

        printf("\nqual 1 numero da soma?");
        scanf("%d", &x);
        printf("\nqual 2 numero?");
        scanf("%d",&y);
        resultado_da_soma = adicao(x,y);
        printf("%d", resultado_da_soma);

    break;

    case 2:

        printf("\nqual 1 numero da subtracao?");
        scanf("%d", &x);
        printf("\nqual 2 numero?");
        scanf("%d",&y);
        resultado_da_subtracao = subtracao(x,y);
        printf("%d", resultado_da_subtracao);

    break;

    case 3:

        printf("\nqual 1 numero da multiplicacao?");
        scanf("%d", &x);
        printf("\nqual 2 numero?");
        scanf("%d",&y);
        resultado_da_divisao = divisao(x,y);
        printf("%d", resultado_da_divisao);
        
    break;

    case 4:

        printf("\nqual 1 numero da multiplicacao?");
        scanf("%d", &x);
        printf("\nqual 2 numero?");
        scanf("%d",&y);
        resultado_da_multiplicacao = multiplicacao(x,y);
        printf("%d", resultado_da_multiplicacao);

    break;

    default:
        
        printf("opcao invalida!");
        
    break;
}

return 0;

}