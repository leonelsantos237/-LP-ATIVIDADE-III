#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    int num, i;
    int somaPares = 0, qtdPares = 0;
    int qtdImpares = 0, qtdNegativos = 0;
    int maior, menor;
    float mediaPares, mediaTotal = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dª número: ", i + 1);
        scanf("%d", &num);
    }

    if (num % 2 == 0)
    {
        somaPares += num;
        qtdPares++;
    }
    if (num % 2 != 0)
    {
        qtdImpares++;
    }
    if (num < 0)
    {
        qtdNegativos++;
    }
    if (i == 0 || num > maior)
    {
        maior = num;
    }
    if (i == 0 || num < menor)
    {
        menor = num;
    }

    mediaTotal += num;

    if (qtdPares > 0)
    {
        mediaPares = (float)somaPares / qtdPares;
    }
    else
    {
        mediaPares = 0;
    }

    mediaTotal /= 5;

    printf("Quantidade de números ímpares: %d\n", qtdImpares);
    printf("Quantidade de números negativos: %d\n", qtdNegativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de números pares: %.2f\n", mediaPares);
    printf("Média Total: %.2f\n", mediaTotal);

    return 0;
}
