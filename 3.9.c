#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto[3];
    int palpite[3];
    char resultado[4]; 
    int usadoSecreto[3] = {0, 0, 0}; 
    int usadoPalpite[3] = {0, 0, 0};
    int acertou;
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        secreto[i] = rand() % 10;
    }

    for (int chance = 1; chance <= 10; chance++) {
        printf("==== Chance %d ====\n", chance);
        printf("Palpite: ");
        scanf("%d %d %d", &palpite[0], &palpite[1], &palpite[2]);

        for (int i = 0; i < 3; i++) {
            usadoSecreto[i] = 0;
            usadoPalpite[i] = 0;
            resultado[i] = '_'; 
        }

        for (int i = 0; i < 3; i++) {
            if (palpite[i] == secreto[i]) {
                resultado[i] = '+';
                usadoSecreto[i] = 1;
                usadoPalpite[i] = 1;
            }
        }

        for (int i = 0; i < 3; i++) {
            if (usadoPalpite[i] == 1) 

            for (int j = 0; j < 3; j++) {
                if (usadoSecreto[j] == 0 && palpite[i] == secreto[j]) {
                    resultado[i] = '!';
                    usadoSecreto[j] = 1; 
                }
            }
        }

        resultado[3] = '\0';
        printf("Saida: %s\n", resultado);
        
        acertou = 1;
        for (int i = 0; i < 3; i++) {
            if (resultado[i] != '+') {
                acertou = 0;
                break;
            }
        }

        if (acertou) {
            printf("Parabens! Voce acertou!\n");
            return 0;
        }
    }

    printf("Suas chances acabaram. O numero era: %d%d%d\n", secreto[0], secreto[1], secreto[2]);
    return 0;
}