//Leia um número inteiro N (não negativo) e calcule N! usando um laço. Trate corretamente o 
//caso N = 0. 

#include <stdio.h>
int main() {
    int n;
    int fatorial = 1;
    int i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao pode ser fatorado.\n");
    }
    else {
        for (i = n; i >= 1; i--) {
            fatorial = fatorial * i;
            
        }
        printf("o valor do fatorial é %d", fatorial);
    }

    return 0;
}