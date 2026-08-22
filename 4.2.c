#include <stdio.h>

// Protótipos
void lerValores(int *n1, int *n2, int *n3);
void maior(int n1, int n2, int n3); // agora é void, não retorna nada

int main() {
    int a, b, c;

    lerValores(&a, &b, &c);
    maior(a, b, c); // não guarda retorno, porque não existe mais

    return 0;
}

void lerValores(int *n1, int *n2, int *n3) {
    printf("Digite 3 numeros inteiros: ");
    scanf("%d %d %d", n1, n2, n3);
}

// Função void: calcula E imprime o resultado, sem devolver nada
void maior(int n1, int n2, int n3) {
    int maiorAtual;

    if (n1 > n2) {
        maiorAtual = n1;
    } else {
        maiorAtual = n2;
    }

    if (n3 > maiorAtual) {
        maiorAtual = n3;
    }

    printf("O maior valor e: %d\n", maiorAtual);
}