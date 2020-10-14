#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Declaração das funções
void escrever(string texto);

int main() {
    // Declaração de variáveis
    int num1, num2, opcao;
    float res;

    escrever("Log b = x");
    escrever("    a");
    escrever("Quais elementos você deseja atribuir um valor?");

    // Listar opções para o usuário escolher
    escrever("1)a - Base e b - Logaritmando");
    escrever("2)a - Base e x - Logaritmo");
    escrever("3)b - Logaritmando e x - logaritmo");

    scanf("%d", &opcao);

    switch(opcao) {
        // Base e Logaritmando
        case 1:
            printf("Digite o valor da base: ");
            scanf("%d", &num1);
            printf("Log b = x \n");
            printf("    %d \n\n", num1);
            printf("Digite o valor do logaritmando: ");
            scanf("%d", &num2);
            printf("Log %d = x \n", num2);
            printf("    %d \n\n", num1);

            if(num1==1) {
                printf("A base não pode ser igual a 1! \n");
            }

            else if(num1==num2){
                printf("Quando o logaritmando e a base forem iguais o logaritmo será 1 \n");
            }

            else if (num2==1) {
                printf("Quando logaritmando for 1 o logaritmo sempre será 0 \n");
            }

            else {
            // calcular o valor x para dar o resultado
                res = log(num2)/log(num1);
                printf("%.2f \n", res);
            }
            break;

        // Base e Logaritmo
        case 2:
            printf("Digite o valor da base: ");
            scanf("%d", &num1);
            printf("Log b = x \n");
            printf("    %d \n\n", num1);
            printf("Digite o valor do Logaritmo: ");
            scanf("%d", &num2);
            printf("Log b = %d \n", num2);
            printf("    %d \n\n", num1);

            if (num2==0){
                printf ("Todo logaritmo = 0 o logaritmando será 1.\n");
            } else if(num1==1) {
                printf("A base não pode ser igual a 1! \n");
            }

            else {
                res = num1;
                for(int i=0; i<(num2-1); i++) {
                    res *= num1;
                }
                printf("O logaritmando de base %d é %.2f", num1, res);
            }
            break;

        // Logaritmando e Logaritmo
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

            // Em progresso
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
