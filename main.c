#include <stdio.h>
#include <locale.h>
#include "funcoes.h"

int main(void) {
    setlocale(LC_ALL,"");

    int menu,vetor,matriz;//menu

    menu = 0;

    while (menu != 5)
    {
        menu = 0;
        vetor = 0;
        matriz = 0;

        printf("  ______     _______     _           _______ \n");
        printf(" |  __   %c  (  ____ %c   ( )         (  ____ %c \n",92,92,92);
        printf(" | (  %c  )  | (    %c/   | |         | (    %c/ \n",92,92,92);
        printf(" | |   ) |  | |         | |         | |      \n");
        printf(" | |   | |  | |         | |         | |      \n");
        printf(" | |   ) |  | |         | |         | |      \n");
        printf(" | (__/  )_ | (____/%c _ | (____/%c _ | (____/%c \n",92,92,92);
        printf(" (______/(_)(_______/(_)(_______/(_)(_______/\n\n");
        printf("    Dispositivo de Calculo em Linguagem C");

        printf("\n\n");
        printf("     _____________________________________\n");
        printf("    |           Menu Principal            |\n");
        printf("    |_____________________________________|\n");
        printf("    |                                     |\n");
        printf("    |         1- Vetor                    |\n");
        printf("    |         2- Matrizes                 |\n");
        printf("    |         3- Funções                  |\n");
        printf("    |         4- Derivadas                |\n");
        printf("    |               Sair(5)               |\n");
        printf("    |_____________________________________|\n");
        printf("\n    Digite uma das opcoes acima:");
        scanf("%d",&menu);
        limpaTela();
        if (menu > 5){
            printf("Digite uma opção valida\n\n\n");
            continue;
        }
        switch (menu) {
            case 1://vetor
                while (vetor != 3){
                    printf("1- Ordem crescente\n");
                    printf("2- Ordem descrescente\n");
                    printf("3- VOLTAR AO MENU PRINCIPAL\n");

                    printf("Escolha sua opcao: ");
                    scanf("%d",&vetor);


                    if(vetor != 3){
                        switch (vetor) {
                            case 1://crescente
                                vetorCrescente();
                                break;
                            case 2://decrescente
                                vetorDecrescente();
                                break;

                            default:
                                printf("Opção Inválida,tente novamente\n");
                                break;
                        }//fim switch vetor
                    }
                }//fim  menu vetor
                break;
            case 2://Matrizes
                while(matriz != 5){
                    printf("\n1- Determinantes\n");
                    printf("2- Soma\n");
                    printf("3- Subtração\n");
                    printf("4- Produto\n");
                    printf("5- VOLTAR AO MENU PRINCIPAL\n");

                    printf("Escolha sua opção: ");
                    scanf("%d",&matriz);

                    switch (matriz) {
                        case 1://Determinantes
                            matrizDeterminante();
                            break;
                        case 2://Soma
                            break;
                        case 3://Subtracao
                            break;
                        case 4://Produto
                            break;
                        case 5://voltar
                            continue;
                        default:
                            printf("Digite uma opção Válida\n\n\n");
                            continue;
                    }
                }
                break;
        }//fim switch menu

    }//fim while menu
}
