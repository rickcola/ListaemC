#include <stdio.h>

int main() {
    int valor;

    printf("Digite o valor em reais: ");
    scanf("%d", &valor);

    int n100 = valor / 100;
    valor = valor % 100;

    int n50 = valor / 50;
    valor = valor % 50;

    int n20 = valor / 20;
    valor = valor % 20;

    int n10 = valor / 10;
    valor = valor % 10;

    int n5 = valor / 5;
    valor = valor % 5;

    int n2 = valor / 2;
    valor = valor % 2;

    int n1 = valor / 1;

    printf("%d nota(s) de 100,00\n", n100);
    printf("%d nota(s) de 50,00\n", n50);
    printf("%d nota(s) de 20,00\n", n20);
    printf("%d nota(s) de 10,00\n", n10);
    printf("%d nota(s) de 5,00\n", n5);
    printf("%d nota(s) de 2,00\n", n2);
    printf("%d nota(s) de 1,00\n", n1);

    return 0;
}