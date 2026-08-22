#include <stdio.h>

int isPrimo(int n) {
    if (n < 2) {
        return FALSE;
    }
    if (n == 2) {
        return TRUE;
    }
    if (n % 2 == 0) {
        return FALSE;
    }

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return FALSE;
        }
    }

    return TRUE;
}

int main() {
    printf("Numeros primos entre 1 e 100:\n");

    for (int n = 1; n <= 100; n++) {
        if (isPrimo(n) == TRUE) {
            printf("%d ", n);
        }
    }
    printf("\n");

    return 0;
}