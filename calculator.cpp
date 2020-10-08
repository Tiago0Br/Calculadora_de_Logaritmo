#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

// Declaração das funções
void escrever(string texto);

int main() {
    // Declaração de variáveis
    int num1, num2, opcao;

    escrever("Log b = x");
    escrever("    a");
    escrever("Quais elementos você deseja atribuir um valor?");

    // Listar opções para o usuário escolher
    escrever("1)a - Base e b - Logaritmando");
    escrever("2)a - Base e x - Logaritmo");
    escrever("3)b - Logaritmando e x - logaritmo");

    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite o valor da base: ");
            scanf("%d", &num1);
            printf("Log b = x \n");
            printf("    %d \n\n", num1);
            printf("Digite o valor do logaritmando: ");
            scanf("%d", &num2);
            printf("Log %d = x \n", num2);
            printf("    %d \n\n", num1);
            break;

        case 2:
            printf("Digite o valor da base: ");
            scanf("%d", &num1);
            printf("Log b = x \n");
            printf("    %d \n\n", num1);
            printf("Digite o valor do Logaritmo: ");
            scanf("%d", &num2);
            printf("Log b = %d \n", num2);
            printf("    %d \n\n", num1);
            break;

        case 3:
            printf("Digite o valor do logaritmando: ");
            scanf("%d", &num1);
            printf("Log %d = x \n", num1);
            printf("    a \n\n");
            printf("Digite o valor do logaritmo: ");
            scanf("%d", &num2);
            printf("Log %d = %d \n", num1, num2);
            printf("    a \n\n");
            break;

        default:
            // Deve haver um tratamento de erros caso o usuário digite um valor inválido
            printf("Valor inválido.");
    }

    return 0;
}

// Escreve um texto passado como parâmetro quebrando linha no final
void escrever(string texto) {
    cout << texto << "\n";
}
