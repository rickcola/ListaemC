#include <stdio.h>

int main()
{   
    int  n1, n2, n3; 
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2); 
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);
    
    if (n1 > n2 && n1 > n3) {
        printf("O maior é %d\n", n1);
    }
    else if (n2 > n1 && n2 > n3) {
        printf("O maior é %d\n", n2);
    }
    else {
        printf("O maior é %d\n", n3);
    }

    

  }