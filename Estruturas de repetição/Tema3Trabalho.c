#include <stdio.h>
int main (){

    //Torre: Move-se em linha reta horizontalmente ou verticalmente. o movimento da Torre cinco casas para a direita.
    //Bispo: Move-se na diagonal.  o movimento do Bispo cinco casas na diagonal para cima e à direita.
    //Rainha: Move-se em todas as direções. o movimento da Rainha oito casas para a esquerda.
        int torre, bispo, rainha;
        int casastorre, casasbispo, casasrainha;
        int movimentoCompleto = 1;

        printf("     ## JOGO DE XADRES, MOVIMENTO DAS PEÇAS ##\n");
        printf("       TORRE, BISPO, RAINHA E CAVALO\n ");
        printf("Digite quantas casas a torre pode se movimentar: ");
        scanf("%d", &casastorre);

        printf("Digite quantas casas o bispo pode movimentar: ");
        scanf("%d", &casasbispo);

     do {
        printf("Digite quantas casas a rainha pode movimentar: ");
        scanf("%d", &casasrainha);

    } while (casasrainha > 8);

    for (torre = 1; torre <= casastorre; torre++ ){
        printf("A torre movevimentou %d casas para direita\n", torre );
    } 

    bispo = 1;
    while (bispo <= casasbispo) {
        printf("O bispo movimentou %d casas para direita e á cima\n", bispo);
    bispo++;  }

    printf("A rainha movimentou %d casas para esquerda\n", casasrainha);

    printf("Cavalo: \n");
    
    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++)
       {
        printf("Para cima\n");
      }
        printf("Para esquerda\n");
 }
return 0;
}