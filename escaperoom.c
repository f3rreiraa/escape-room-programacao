#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char resposta;

    do {
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

        int tentativas = 3;
        int tentativa;

        while (tentativas > 0) {
            printf("Tentativas restantes: %d\n", tentativas);
            if (tentativas == 1) {
            printf("*** AVISO: Ultima tentativa! ***\n");
            if (codigo % 10 >= 5)
                printf("Dica final: O algarismo final e maior ou igual a 5.\n");
            else
                printf("Dica final: O algarismo final e menor que 5.\n");
        }
            printf("Insira o codigo das runas: ");
            scanf("%d", &tentativa);

            if (tentativa == codigo) {
                printf("\nAs runas brilham! A porta de pedra se abre lentamente...\n");
                printf("Voce adentra a Cripta do Rei Esquecido.\n");
                break;
            } else if (tentativa < codigo) {
                printf("As runas piscam. O codigo e maior.\n\n");
            } else {
                printf("As runas piscam. O codigo e menor.\n\n");
            }
            tentativas--;
        }

        if (tentativas == 0) {
            printf("\nAs runas se apagam. A magia te expulsa da cripta.\n");
            printf("O codigo era %d. A cripta permanece selada.\n", codigo);
        }

        printf("\nDeseja tentar decifrar outra cripta? (s/n): ");
        scanf(" %c", &resposta);

    } while (resposta == 's' || resposta == 'S');

    printf("\nVoce parte em busca de novas aventuras...\n");
    return 0;
}