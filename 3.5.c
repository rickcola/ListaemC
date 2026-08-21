//Leia um número inteiro e determine se ele é primo ou não, usando um laço para testar os 
//divisores


#include <stdio.h>

int main() {
    int n;
    int primo = 1; 

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 2) {
        primo = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                primo = 0; 
            }
        }
    }
    
    if (primo == 1) {
        printf("%d e primo!\n", n);
    } else {
        printf("%d nao e primo.\n", n);
    }

}