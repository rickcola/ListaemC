

#include <stdio.h>

int main() {
    float distancia, combustivel, Tdelitros, pessoas, medporlt, Vgasolina, Tcombustivel, valorapagar;
    printf("Olá, Giselda.\n");
    printf("Digite a distância final da viagem: ");
    scanf("%f", &distancia);
    printf("Agora, informe em média quantos KM o seu carro faz por litros: ");
    scanf("%f", &medporlt);
    
    Tdelitros = distancia / medporlt;
    
    printf("o valor total de litros gasto foi de %.2f\n", Tdelitros);
    
    Vgasolina = 6.19;
    
    Tcombustivel = Tdelitros * Vgasolina;
    
    printf("O total de gasolina gasto foi de %.2f\n", Tcombustivel);
    printf("Agora, digite a quantidade de pessoas que foram a viagem: ");
    scanf("%f", &pessoas);
    
    valorapagar = Tcombustivel / pessoas;
    
    printf("O valor total para cada um pagar foi de: %.2f\n", valorapagar);
    
    
}