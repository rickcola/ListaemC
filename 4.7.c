#include <stdio.h>

int tamanhoSequenciaCollatz(int n) {
    int passos = 0;
    long valor = n;
    while (valor != 1) {
        if (valor % 2 == 0) {
            valor = valor / 2;
        } else {
            valor = 3 * valor + 1;
        }
        passos++;
    }

    return passos;
}

int main() {
    int n;
    printf("Digite um numero (1 a 100000): ");
    scanf("%d", &n);

    int melhorNumero = 1;
    int maiorTamanho = 0;

    for (int i = 1; i <= n; i++) {
        int tamanho = tamanhoSequenciaCollatz(i);
        if (tamanho > maiorTamanho) {
            maiorTamanho = tamanho;
            melhorNumero = i;
        }
    }

    printf("O numero com a maior sequencia ate %d e: %d\n", n, melhorNumero);
    printf("Tamanho da sequencia: %d passos\n", maiorTamanho);

    return 0;
}