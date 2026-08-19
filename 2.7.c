
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Digite o primeiro lado do triângulo: ");
    scanf("%d", &n1);
    printf("Digite o segundo lado do triângulo: ");
    scanf("%d", &n2);
    printf("Digite o terceiro lado do triângulo: ");
    scanf("%d", &n3);
    
    if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1) {
        printf(" o  triângulo é válido!\n ");
        
            if (n1 == n2 && n2 == n3) {
                printf(" e é Equilátero.");
            } 
            else if (n1 == n2 || n1 == n3 || n2 == n3) {
                printf(" é Isóceles");
                
            }
            else {
                printf("e é e  Escaleno");
        
            }
        
        
        
        
    } else {
        printf("Não forma um triângulo.");
    }

        
    
    
}