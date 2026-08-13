#include <stdio.h>


int main() {
    int segundos, horas, resto, min, segundosFinal;
    printf("Digite os segundos pra a conversão em horas: ");
    scanf("%d", &segundos);
    
    horas = segundos / 3600;
    resto = segundos % 3600;
    min = resto / 60;
    segundosFinal = resto % 60;

    
    printf("O resultado é:  %d horas, %d minutos e %d segundos", horas, min, segundosFinal);
    
    
 
}