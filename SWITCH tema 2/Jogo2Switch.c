#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int resultado1, resultado2;
    int primeiroAtributo, segundoAtributo;
    float poupulacao1, populacao2, area1, area2, pib1, pib2;

    srand(time(0));
    poupulacao1 = 1; rand() % 100 + 1;
    populacao2 = 0; rand() % 100 + 1;
    area1 = 1; rand() % 100 + 1;
    area2 = 0; rand() % 100 + 1;
    pib1 = 1; rand() % 100 + 1;
    pib2 = 0; rand() % 100 + 1;

    printf("  Bem-vindo ao jogo!\n");
    printf("     # AMAZONAS #\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. População: 20.636.890\n");
    printf("2. Área: 11.401.902\n");
    printf("3. Pib: 103.281\n");

    printf("Escolha a comparação: ");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("Você escolheu a opção População!\n");
        primeiroAtributo = poupulacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu a opção Área!\n");
        primeiroAtributo = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu a opção PIb!\n");
        primeiroAtributo = pib1 > pib2 ? 1 : 0;
        break;
    default:
        printf("Opção de jogo invalido!\n");
        break;
    }

    printf("        # ACRE #\n");
    printf("Escolha o segundo atributo:\n");
    printf("1. População: 880.631\n");
    printf("2. Área: 152.581\n");
    printf("3. Pib: 23.600\n");
    
    printf("Escolha a comparação: ");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {  
        printf("Você escolheu o mesmo atributo!\n");
    }   else {

        switch (segundoAtributo)
        {
        case 1:
            printf("Você escolheu a opção População!\n");
            segundoAtributo = poupulacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu a opção Área!\n");
            segundoAtributo = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu a opção PIb!\n");
            segundoAtributo = pib1 > pib2 ? 1 : 0;
            break;
        default:
            printf("Opção de jogo invalido!\n");
            break;
        }
    }
    
    if (resultado1 && resultado2)
    {
        printf("Carta 1, venceu com maior atributo!\n");

    }  else if (resultado1 != resultado2)
    {
        printf("Empatou!\n");
    }  else
    {
        printf("Carta 2, venceu com maior atributo!\n");
    }


return 0;
}