#include <stdio.h>
#include <stdlib.h>

// Função para executar a tabuada (copiado de tabuada-validada.c)
void executarTabuada() {
    int numero;
    while (1) {
        printf("\n--- Tabuada Validada ---\n");
        printf("Digite um número entre 1 e 10: ");
        if (scanf("%d", &numero) == 1) {
            if (numero >= 1 && numero <= 10) {
                break;
            } else {
                printf("Valor inválido. Digite um número entre 1 e 10.\n");
                // Limpar o buffer de entrada
                while (getchar() != '\n');
            }
        } else {
            printf("Entrada inválida.\n");
            // Limpar o buffer de entrada
            while (getchar() != '\n');
        }
    }
    printf("\nTabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

// Função para executar o menu interativo (simplificado para rodar sem loop infinito no fluxo principal)
void executarMenuInterativo() {
    int opcao = 0;
    printf("\n--- Menu Interativo (Execução Única) ---\n");
    printf("Escolhendo a opção 2 (Imprimir os números de 1 a 10) para demonstração única.\n");
    opcao = 2; // Escolhemos uma opção para executar no fluxo principal

    switch (opcao) {
        case 1:
            printf("Opção 1 não implementada para execução única.\n");
            break;
        case 2:
            printf("Números de 1 a 10:\n");
            for (int i = 1; i <= 10; i++) {
                printf("%d ", i);
            }
            printf("\n");
            break;
        case 3:
            printf("Opção 3 (Sair) não faz sentido na execução sequencial.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
}

// Função para executar o login simples (copiado de login-simples.c)
void executarLoginSimples() {
    int senha;
    int senha_correta = 4321;

    printf("\n--- Login Simples ---\n");
    do {
        printf("Digite a senha numérica de 4 dígitos: ");
        if (scanf("%d", &senha) != 1) {
            printf("Entrada inválida.\n");
            // Limpar o buffer de entrada
            while (getchar() != '\n');
            senha = -1; // Garante que o loop continue
            continue;
        }
        if (senha != senha_correta) {
            printf("Senha incorreta. Tente novamente.\n");
        }
    } while (senha != senha_correta);

    printf("Acesso concedido! Senha correta.\n");
}

int main() {
    executarTabuada();
    executarMenuInterativo();
    executarLoginSimples();

    return 0;
}