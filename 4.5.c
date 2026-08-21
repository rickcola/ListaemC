#include <stdio.h>
#include <stdlib.h> 

int somaDigitos(int numero) {
    numero = abs(numero); 
    int soma = 0;

    while (numero > 0) {
        int digito = numero % 10;  
        soma = soma + digito;
        numero = numero / 10;      
    }

    return soma;
}

int main() {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    int resultado = somaDigitos(valor);
    printf("A soma dos digitos de %d e %d\n", valor, resultado);

    return 0;
}