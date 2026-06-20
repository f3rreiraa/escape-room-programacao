#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("=== A Cripta do Rei Esquecido ===\n");
    printf("\nVoce se depara com uma enorme porta de pedra.\n");
    printf("Simbolos antigos cobrem as paredes ao redor dela.\n");
    printf("Uma voz ecoa: 'Decifre o codigo das runas e a cripta se abrira...'\n\n");

    srand(time(0));
    int codigo = rand() % 41 + 10;

printf("=== AS RUNAS REVELAM ===\n");
    if (codigo % 2 == 0)
        printf("- O codigo e um numero PAR\n");
    else
        printf("- O codigo e um numero IMPAR\n");

    if (codigo <= 30)
        printf("- O codigo nao passa de 30\n");
    else
        printf("- O codigo e maior que 30\n");

    printf("- O codigo esta entre 10 e 50\n\n");


int tentativa;
    printf("Insira o codigo das runas: ");
    scanf("%d", &tentativa);


if (tentativa == codigo) {
        printf("\nAs runas brilham! A porta de pedra se abre lentamente...\n");
        printf("Voce adentra a Cripta do Rei Esquecido.\n");
    } else if (tentativa < codigo) {
        printf("\nAs runas piscam em vermelho. O codigo e maior.\n");
    } else {
        printf("\nAs runas piscam em vermelho. O codigo e menor.\n");
    }


    return 0;
}