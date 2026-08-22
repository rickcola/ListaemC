#include <stdio.h>

void lerValores(int *n1, int *n2, int *n3);
int maior(int n1, int n2, int n3);
void imprimirResultado(int valor);

int main() {
    int a, b, c;

    lerValores(&a, &b, &c);
    int resultado = maior(a, b, c);
    imprimirResultado(resultado);

    return 0;
}

void lerValores(int *n1, int *n2, int *n3) {
    printf("Digite 3 numeros inteiros: ");
    scanf("%d %d %d", n1, n2, n3);
}

int maior(int n1, int n2, int n3) {
    int maiorAtual;

    if (n1 > n2) {
        maiorAtual = n1;
    } else {
        maiorAtual = n2;
    }

    if (n3 > maiorAtual) {
        maiorAtual = n3;
    }

    return maiorAtual;
}
void imprimirResultado(int valor) {
    printf("O maior valor e: %d\n", valor);
}