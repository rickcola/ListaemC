#include <stdio.h>
#include <math.h>


int main()
{
    float raio, area;
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);
    
    area = M_PI * pow(raio, 2);
    
    printf("O resultado é: %f\n", area);
}