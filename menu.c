#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para uso de acentuação em pt-br

int opcao, opcao_cad, opcao_rlt, opcao_crono, opcao_av;

int main()
{
    setlocale(LC_ALL, ""); // chamando local

    int continuar = 1;

    do
    {
        system("cls");
        printf("PIM.invest\n");
        printf("Bem vindo, investidor!\n\n");
        printf("       Menu\n");
        printf(" -----------------\n");
        printf("|  1. Cadastro    |\n");
        printf("|  2. Relatórios  |\n");
        printf("|  3. Cronograma  |\n");
        printf("|  4. Avisos      |\n");
        printf(" -----------------\n\n");

        printf("Escolha a opção desejada.\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            system("cls");
            printf("        Cadastro\n");
            printf(" ------------------------\n");
            printf("|  1. Área do cliente    |\n");
            printf("|  2. Equipe PIM.invest  |\n");
            printf("|  0. Voltar             |\n");
            printf(" ------------------------\n\n");

            printf("Escolha a opção desejada.\n");
            scanf("%d", &opcao_cad);
            break;

        case 2:
            system("cls");
            printf("   Relatórios\n");
            printf(" ---------------\n");
            printf("|  1. Clientes  |\n");
            printf("|  2. Empresa   |\n");
            printf("|  0. Voltar    |\n");
            printf(" ---------------\n\n");

            printf("Escolha a opção desejada.\n");
            scanf("%d", &opcao_rlt);
            break;

        case 3:
            system("cls");
            printf("   Cronograma\n");
            printf(" ---------------\n");
            printf("|  1. Semanal  |\n");
            printf("|  2. Mensal   |\n");
            printf("|  0. Voltar   |\n");
            printf(" ---------------\n\n");

            printf("Escolha a opção desejada.\n");
            scanf("%d", &opcao_crono);
            break;

        case 4:
            system("cls");
            printf("   Avisos\n");
            printf(" -----------\n");
            printf("|  !avisos  |\n");
            printf("|  !avisos  |\n");
            printf("|  0. Voltar  |\n");
            printf(" -----------\n\n");

            printf("Escolha a opção desejada.\n");
            scanf("%d", &opcao_crono);
            break;

        case 0:
            system("cls");
            printf("Deseja voltar ao menu principal?");
            break;

        default:
            printf("Comando inválido.\n");
        }
    } while (continuar);
}

//   Precisa:
//   . ver como faz pra voltar pro menu CONSEGUIIII
//   . criar função pro menu inicial e chamar CONSEGUIIIIII
//   . colocar mais opçoes dentro das opcoes
//   . ver utf8