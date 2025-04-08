#include <stdio.h>

// Programador 4: Funções de cálculo (poderia estar em outro arquivo .h e .c)
void verificarParImpar(int num) {
    if (num % 2 == 0) {
        printf("%d é par.\n", num);
    } else {
        printf("%d é ímpar.\n", num);
    }
}

void imprimirDeUmADez() {
    printf("Números de 1 a 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int opcao;

    // Programador 3: Estrutura geral com switch
    while (1) {
        printf("\nMenu:\n");
        printf("1. Calcular se um número é par ou ímpar\n");
        printf("2. Imprimir os números de 1 a 10\n");
        printf("3. Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int num;
                printf("Digite um número: ");
                scanf("%d", &num);
                verificarParImpar(num);
                break;
            }
            case 2:
                imprimirDeUmADez();
                break;
            case 3:
                printf("Saindo do programa.\n");
                return 0; // Sai do programa
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
                continue; // Volta para o início do loop para mostrar o menu novamente
        }
    }

    return 0;
}