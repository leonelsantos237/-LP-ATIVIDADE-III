#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    char pessoas[5][200];
    int idade[5][5];
    float peso[5][5], maiorPeso = 0, menorPeso = 999;
    float altura[5][5], maiorAltura = 0, menorAltura = 999;
    int i, j, maiorIdade = 0, menorIdade = 999;

    for (i = 0; i < 5; i++)
    {
        printf("Pessoas: ");
        scanf("%s", pessoas[i]);
        for (j = 0; j < 1; j++)
        {
            printf("Idade: ");
            scanf("%i", &idade[i][j]);
            printf("Peso: ");
            scanf("%f", &peso[i][j]);
            printf("Altura: ");
            scanf("%f", &altura[i][j]);
            if (maiorIdade < idade[i][j])
            {
                maiorIdade = idade[i][j];
            }
            if (idade[i][j] < menorIdade)
            {
                menorIdade = idade[i][j];
            }

            if (peso[i][j] > maiorPeso)
            {
                maiorPeso = peso[i][j];
            }
            if (peso[i][j] < menorPeso)
            {
                menorPeso = peso[i][j];
            }

            if (altura[i][j] > maiorAltura)
            {
                maiorAltura = altura[i][j];
            }
            if (altura[i][j] < menorAltura)
            {
                menorAltura = altura[i][j];
            }
        }
        fflush(stdin);
    }

    printf("Exibindo dados\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nPessoa: %s \n", pessoas[i]);
        for (j = 0; j < 1; j++)
        {
            printf("Idade:%i \n", idade[i][j]);

            printf("Peso:%f \n", peso[i][j]);

            printf("Altura:%f \n", altura[i][j]);
        }
    }
    printf("Maior idade: %i  | Menor idade %f", maiorIdade, menorIdade);
    printf("\nMaior Peso: %f  | Menor peso: %f", maiorPeso, menorPeso);
    printf("\nMaior Altura: %f  | Menor altura: %f", maiorAltura, menorAltura);
    return 0;
}
