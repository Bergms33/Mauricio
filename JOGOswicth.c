#include <stdio.h>
int main (){

    int opcao;
    char nomedacidade1[20], nomedacidade2[20];
    float populacao1, populacao2;
    float area1, area2;

    printf("### Jogo Super trunfo ###\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair do jogo\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Digite o nome da Cidade 1: ");
        scanf("%s", &nomedacidade1);
        printf("Digite a populaçao da cidade 1: ");
        scanf("%f", &populacao1);
        printf("Digite a área da cidade 1: ");
        scanf("%f", &area1);

        printf("Digite o nome da Cidade 2: ");
        scanf("%s", &nomedacidade2);
        printf("Digite a populaçao da cidade 2: ");
        scanf("%f", &populacao2);
        printf("Digite a área da cidade 2: ");
        scanf("%f", &area2);
        

        printf("Cidade1: %s, População1: %.0f, Área1: %.0f\n", nomedacidade1, populacao1, area1);
        printf("Cidade2: %s, População2: %.0f, Área2: %.0f\n", nomedacidade2, populacao2, area2);
        
    if (populacao1 > populacao2) {
        printf("%s, Venceu com maior populaçao!\n", nomedacidade1);  
    } 
    else if (populacao2 > populacao1) {
        printf("%s, Venceu com maior população!\n", nomedacidade2);
    } else if (area1 > area2) {
        printf("%s, Venceu com maior área!\n", nomedacidade1);
    } else if (area2 > area1) {
        printf("%s, venceu com maior área!\n", nomedacidade2);
    } else {
        printf("Houve um empate das cartas!\n");
    } break;

    case 2: 
        printf("###Regras do jogo###\n");
        printf("Cada jogador escolhe uma carta.\n");
        printf("A carta com maior atributo, Vence!\n");
        break;
    default:
        printf("Opção invalida\n");
        break;
    }  

}
