#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para uso de acentuação em pt-br

int opcao, opcao_cad, opcao_rlt, opcao_crono, opcao_av;


int main(){

    setlocale(LC_ALL, ""); //chamando local

    printf("PIM.invest\n");
    printf ("Bem vindo, investidor!\n\n");
    printf ("       Menu\n");
    printf (" -----------------\n");
    printf("|  1. Cadastro    |\n");
    printf("|  2. Relatórios  |\n");
    printf("|  3. Cronograma  |\n");
    printf("|  4. Avisos      |\n");
    printf (" -----------------\n\n");

    printf ("Escolha a opção desejada.\n");
    scanf ("%d", &opcao);

    switch(opcao) {
    case 1:
        system("cls");
        printf ("        Cadastro\n");
        printf (" ------------------------\n");
        printf("|  1. Área do cliente    |\n");
        printf("|  2. Equipe PIM.invest  |\n");
        printf("|  3. Voltar             |\n");
        printf (" ------------------------\n\n");

        printf ("Escolha a opção desejada.\n");
        scanf ("%d", &opcao_cad);
        break;

    case 2:
        system("cls");
        printf ("   Relatórios\n");
        printf (" ---------------\n");
        printf("|  1. Clientes  |\n");
        printf("|  2. Empresa   |\n");
        printf("|  3. Voltar    |\n");
        printf (" ---------------\n\n");

        printf ("Escolha a opção desejada.\n");
        scanf ("%d", &opcao_rlt);
        break;

    case 3:
        system("cls");
        printf ("   Cronograma\n");
        printf (" ---------------\n");
        printf("|  1. Semanal  |\n");
        printf("|  2. Mensal   |\n");
        printf("|  3. Voltar   |\n");
        printf (" ---------------\n\n");

        printf ("Escolha a opção desejada.\n");
        scanf ("%d", &opcao_crono);
        break;

    case 4:
        system("cls");
        printf ("   Avisos\n");
        printf (" -----------\n");
        printf("|  !avisos  |\n");
        printf("|  !avisos  |\n");
        printf("|  !avisos  |\n");
        printf (" -----------\n\n");

        printf ("Escolha a opção desejada.\n");
        scanf ("%d", &opcao_crono);
        break;

    }

}

/* Precisa:
   . ver como faz pra voltar pro menu
   . criar função pro menu inicial e chamar
   . colocar mais opçoes dentro das opcoes
     case nas case
