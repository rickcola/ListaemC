
#include <stdio.h>

int main()
{
    int soma = 0, contador = 0, numero, n;

    printf("Digite quantos números vc quer somar: ");
    scanf("%d", &n);

    for (contador = 0; contador < n; contador++) {
        printf("Digite o numero %d: ", contador + 1);
        scanf("%d", &numero);
        soma = soma + numero;
    }

    printf("O resultado da soma é: %d\n", soma);

}