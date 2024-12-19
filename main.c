#include <stdio.h>

int main() {
    int opcao;

    do {

        printf("\nMenu de opcoes:\n");
        printf("1 - Opcao 1\n");
        printf("2 - Opcao 2\n");
        printf("3 - Opcao 3\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


        switch (opcao) {
            case 1:
                printf("Voce escolheu a Opcao 1.\n");
                break;

            case 2:
                printf("Voce escolheu a Opcao 2.\n");
                break;

            case 3:
                printf("Voce escolheu a Opcao 3.\n");
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0); 

    return 0;
}