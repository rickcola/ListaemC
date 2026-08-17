#include <stdio.h>

int main()
{   
    int  idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    if (idade <= 11) {
        printf("%d pela idade a pessoa eh crianca\n", idade);
    } 
    else if (idade <= 17) { 
        printf("%d pela idade a pessoa eh adolescente\n", idade);
    } 
    else if (idade <= 59) { 
        printf("%d pela idade a pessoa eh adulta\n", idade);
    } 
    else {
        printf("%d é idoso\n", idade);
    }
}