#include <stdio.h>

int main() {

    /* -------------------------------
       Movimento do Cavalo
       Duas casas para baixo
       Uma casa para a esquerda
       ------------------------------- */

    int passosBaixo = 2;
    int passosEsquerda = 1;

    /* Linha em branco para separar dos movimentos anteriores */
    printf("\n");

    /* Loop for: controla o movimento principal (para baixo) */
    for (int i = 0; i < passosBaixo; i++) {
        printf("Baixo\n");
    }

    /* Loop while: movimento perpendicular (para a esquerda) */
    int contador = 0;
    while (contador < passosEsquerda) {
        printf("Esquerda\n");
        contador++;
    }

    return 0;
}
