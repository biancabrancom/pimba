#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int opcao, opcao_cad, opcao_rlt, opcao_crono, opcao_av;

int main()
{
    setlocale(LC_ALL, "");

    int continuar = 1;

    do
    {
        system("cls");
        printf("       InvistaC\n");
        printf(" ----------------------\n");
        printf(" Bem vindo, investidor!\n\n");
        printf("         Menu\n");
        printf("   -----------------\n");
        printf("  |  1. Cadastro    |\n");
        printf("  |  2. Relatorios  |\n");
        printf("  |  3. Cronograma  |\n");
        printf("  |  4. Avisos      |\n");
        printf("   -----------------\n\n");

        printf(" Escolha a opcao desejada.\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            system("cls");
            cadastro();
            break;

        case 2:
            system("cls");
            relatorios();
            break;

        case 3:
            system("cls");
            relatorios();
            break;

        case 4:
            system("cls");
            avisos();
            break;

        default:
            printf("Comando inválido.\n");
        }
    } while (continuar);
}

int cadastro() {
    printf("           Cadastro\n");
    printf("  -----------------------------\n");
    printf(" |  1. Cadastro de cliente     |\n");
    printf(" |  2. Cadastro de funcionario |\n");
    printf(" |  0. Voltar                  |\n");
    printf("  -----------------------------\n\n");

    printf(" Escolha a opcao desejada.\n");
    scanf("%d", &opcao_cad);
}

    /*switch(opcao_cad)
    {
    case 1:
        system("cls");
        printf("CCCCCC");
        getche();
        break;
        }

int area_cliente() {
    system("cls");
    printf("OIIIII");
}*/

int relatorios() {
    printf("    Relatorios\n");
    printf("  ---------------\n");
    printf(" |  1. Clientes  |\n");
    printf(" |  2. Empresa   |\n");
    printf(" |  0. Voltar    |\n");
    printf("  ---------------\n\n");

    printf(" Aviso: Os relatorios serao descarregados em formato .txt\n");
    printf(" Escolha a opcao desejada.\n");
    scanf("%d", &opcao_rlt);
}

int cronograma() {
    printf("    Cronograma\n");
    printf("  ---------------\n");
    printf(" |  1. Semanal  |\n");
    printf(" |  2. Mensal   |\n");
    printf(" |  0. Voltar   |\n");
    printf("  ---------------\n\n");

    printf(" Escolha a opcao desejada.\n");
    scanf("%d", &opcao_crono);
}

int avisos() {
    printf("     Avisos\n");
    printf("  ------------\n\n");
    printf("  [3* ExpoUni InvistaC]  \n\n");

    printf("  Pelo terceiro ano consecutivo, a InvestC promove  \n");
    printf("  mais uma ExpoUni, uma exposicao online para os    \n");
    printf("  alunos do ensino medio e universitarios de como o \n");
    printf("  mercado financeiro opera, que acontecera nos dias \n");
    printf("  05 e 08 de dezembro.                              \n");

    printf(" -----------------------------------------------------\n\n");

    printf("  [Atividades suspensas]  \n\n");

    printf("  A equipe InvestC vem informar a suspensão de      \n");
    printf("  atividades de atendimento ao cliente a partir do  \n");
    printf("  dia 05 de dezembro. Demais funcoes do software    \n");
    printf("  como informacoes para consulta  continuarao       \n");
    printf("  funcionando.                                      \n\n");


    printf(" Em caso de duvidas, consulte o cronograma da empresa.\n");
    printf(" Pressione 0 para voltar.\n");
    scanf("%d", &opcao_crono);
    break;

    default:
    printf("Comando invalido.\n");
}

//   Precisa:
//   . ver como faz pra voltar pro menu CONSEGUIIII
//   . criar função pro menu inicial e chamar CONSEGUIIIIII
//   . colocar mais opçoes dentro das opcoes CONSEGUINDO!!
//   . ver utf8 NUM DEU, SÓ NA UNIP!!!!!!!!!!!!!!!

//   . calendario no cronograma!!!!!!!!!!!!!!!!!!!
//   . avisos (criar) CONSEGUIII
