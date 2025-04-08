#include <stdio.h>

int main() {
    int senha;
    int senha_correta = 4321;

    do {
        printf("Digite a senha numérica de 4 dígitos: ");
        scanf("%d", &senha);

        if (senha != senha_correta) {
            printf("Senha incorreta. Tente novamente.\n");
        }
    } while (senha != senha_correta);

    printf("Acesso concedido! Senha correta.\n");

    return 0;
}