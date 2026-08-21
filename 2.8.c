#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char sinal;

    printf("Digite a operacao (ex: 1.5 + 6): ");
    scanf("%f %c %f", &num1, &sinal, &num2);

    if (sinal == '+') {
        resultado = num1 + num2;
        printf("%g\n", resultado);
    }
    else if (sinal == '-') {
        resultado = num1 - num2;
        printf("%g\n", resultado);
    }
    else if (sinal == '*') {
        resultado = num1 * num2;
        printf("%g\n", resultado);
    }
    else if (sinal == '/') {
        if (num2 == 0) {
            printf("Divisao por zero nao permitida.\n");
        } else {
            resultado = num1 / num2;
            printf("%g\n", resultado);
        }
    }
    else {
        printf("Operacao invalida.\n");
    }

    return 0;
}