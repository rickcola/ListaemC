
#include <stdio.h>

//Leia um número inteiro N e imprima sua tabuada de multiplicação (de 1 a 10).  

int main()
{
    int mult = 0, contador = 0, numero, n;
    
    printf("De qual número você quer saber a tabuada: ");
    scanf("%d", &n);
    
    for(contador = 0; contador <=10; contador++) {
        mult = n * contador;
        printf(" atabuada é %d * %d = %d\n", n, contador, mult);
        
    }
    
    
    
    
    
    

}