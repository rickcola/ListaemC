#include <stdio.h>

int isCapicua(int numero) {
    int original = numero;
    int reverso = 0;
    int resto;

    while (numero > 0) {
        reverso = reverso * 10 + resto; 
        numero = numero / 10;           
    }

    if (original == reverso) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    int resultado = isCapicua(valor);

    if (resultado == 1) {
        printf("%d e capicua\n", valor);
    } else {
        printf("%d nao e capicua\n", valor);
    }

    return 0;
}