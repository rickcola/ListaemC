#include <stdio.h>
#include <stdlib.h> 

int main() {
    int iris1_a1=123, iris1_a2=456, iris1_a3=789;
    int iris2_a1=987, iris2_a2=654, iris2_a3=321;
    int iris3_a1=111, iris3_a2=222, iris3_a3=333;
    int iris4_a1=444, iris4_a2=555, iris4_a3=666;

    int tolerancia = 5;
    int leitura_a1, leitura_a2, leitura_a3;

    printf("Digite os 3 atributos da leitura da iris: ");
    scanf("%d %d %d", &leitura_a1, &leitura_a2, &leitura_a3);

    if (abs(leitura_a1 - iris1_a1) <= tolerancia &&
        abs(leitura_a2 - iris1_a2) <= tolerancia &&
        abs(leitura_a3 - iris1_a3) <= tolerancia) {
        printf("Autenticado com sucesso! Usuario 1\n");
    }
    else if (abs(leitura_a1 - iris2_a1) <= tolerancia &&
             abs(leitura_a2 - iris2_a2) <= tolerancia &&
             abs(leitura_a3 - iris2_a3) <= tolerancia) {
        printf("Autenticado com sucesso! Usuario 2\n");
    }
    else if (abs(leitura_a1 - iris3_a1) <= tolerancia &&
             abs(leitura_a2 - iris3_a2) <= tolerancia &&
             abs(leitura_a3 - iris3_a3) <= tolerancia) {
        printf("Autenticado com sucesso! Usuario 3\n");
    }
    else if (abs(leitura_a1 - iris4_a1) <= tolerancia &&
             abs(leitura_a2 - iris4_a2) <= tolerancia &&
             abs(leitura_a3 - iris4_a3) <= tolerancia) {
        printf("Autenticado com sucesso! Usuario 4\n");
    }
    else {
        printf("Falha na autenticacao. Usuario nao reconhecido.\n");
    }

    return 0;
}