#include <stdio.h>

int main() {

    int N;
    int quantia;
    int sapos = 0, ratos = 0, coelhos = 0;
    int total;
    float percentualS, percentualR, percentualC;
    char tipo;

    printf("=== COBaias DE LABORATORIO ===\n");
    printf("Digite a quantidade de experimentos: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Digite a quantidade e o tipo da cobaia: ");
        scanf("%d %c", &quantia, &tipo);

        if (tipo == 'S') {
            sapos += quantia;
        }
        else if (tipo == 'R') {
            ratos += quantia;
        }
        else if (tipo == 'C') {
            coelhos += quantia;
        }
    }

    total = sapos + ratos + coelhos;

    percentualS = (float)sapos / total * 100;
    percentualR = (float)ratos / total * 100;
    percentualC = (float)coelhos / total * 100;

    printf("\n=== RESULTADO ===\n");
    printf("Total: %d\n", total);
    printf("Sapos: %d\n", sapos);
    printf("Ratos: %d\n", ratos);
    printf("Coelhos: %d\n", coelhos);
    printf("Percentual de sapos: %.2f%%\n", percentualS);
    printf("Percentual de ratos: %.2f%%\n", percentualR);
    printf("Percentual de coelhos: %.2f%%\n", percentualC);

    return 0;
}