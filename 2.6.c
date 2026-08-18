

#include <stdio.h>

int main()
{   
    int ano;
    
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    if ((ano % 4 == 0 && ano % 100 !=0 ) || (ano % 400 == 0))   {
        printf("bissexto, divisivél por 4 %d", ano);
       
    }
    else {
        
        printf("o ano não é bissexto");
    }
    
}