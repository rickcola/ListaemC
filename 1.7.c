

#include <stdio.h>

int main()
{
    int A, B, troca;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    troca = A;
    A = B;
    B = troca;
    
   
    
    
    printf("O resultado de A foi %d, o resultado de B foi %d\n", A, B);

}