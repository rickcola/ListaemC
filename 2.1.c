#include <stdio.h>

int main()
{   
    int  numero; 
    printf("Digite o número: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("o numero é par %d\n", numero);
    } else {
        printf("O número é impar %d\n", numero);
    }
    
    

  }