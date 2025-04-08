#include <stdio.h>
#include <stdlib.h> // Para a função exit()

int isParImpar(int num) {
    if (num % 2 == 0) {
        printf("%d é par.\n", num);
    } else {
        printf("%d é ímpar.\n", num);
    }
    return 0;
}

int imprimirNumeros() {
    printf("Números de 1 a 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

int main() {
    int opcao;

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
                if (scanf("%d", &num) == 1) {
                    isParImpar(num);
                } else {
                    printf("Entrada inválida.\n");
                    // Limpar o buffer de entrada
                    while (getchar() != '\n');
                }
                break;
            }
            case 2:
                imprimirNumeros();
                break;
            case 3:
                printf("Saindo do programa.\n");
                exit(0); // Encerra o programa
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}