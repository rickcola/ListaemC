#include <stdio.h>

int main()
{   
    int  numero; 
    printf("Digite o número: ");
    scanf("%d", &numero);
    
   if (numero > 1) {
       printf("O numero é positivo", numero);
       
   } else if ( numero < -1) {
       printf("O número e negativo ");
       
   } else {
       printf("Zero é nulo");
   }
    
    

  }