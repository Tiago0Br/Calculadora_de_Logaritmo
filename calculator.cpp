#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

// Declaração das funções
void imprimir(string texto);
void pula_linha();
void mensagem();

int main()
{
    // Declaração de variáveis
    int num1, num2, opcao1, opcao2;
    char elemento1, elemento2;

    imprimir("log a = x");
    imprimir("    b");
    pula_linha();

    imprimir("Qual elemento você deseja atribuir um valor?");
    // Lista os três elementos do logaritmo: Logaritmando, Base e logaritmo
    imprimir("1) a - Logaritmando");
    imprimir("2) b - Base");
    imprimir("3) x - Logaritmo");

    // O usuário escolhe apenas uma das três opções
    scanf("%d", &opcao1);

    // O switch identifica o elemento escolhido com base no que o usuário digitou
    switch(opcao1) {
        case 1:
            elemento1 = 'a';
            imprimir("Digite o valor do logaritmando:");
            break;

        case 2:
            elemento1 = 'b';
            imprimir("Digite o valor da base:");
            break;

        case 3:
            elemento1 = 'x';
            imprimir("Digite o valor do logaritmo:");
            break;

        default:
            imprimir("Usuário digita um valor inválido");
    }

    // Atribui a variável num1 o número que o usuário digitou
    scanf("%d", &num1);
    pula_linha();
    // O usuário escolhe outro elemento para atribuir um valor, não podendo escolher o mesmo elemento
    switch (elemento1) {
        case 'a':
            printf("log %d = x \n", num1);
            imprimir("    b");
            pula_linha();

            mensagem();
            imprimir("1) b - Base");
            imprimir("2) x - Logaritmo");
            break;

        case 'b':
            imprimir("log a = x");
            printf("    %d \n", num1);
            pula_linha();

            mensagem();
            imprimir("1) a - Logaritmando");
            imprimir("2) x - Logaritmo");
            break;

        case 'x':
            printf("log a = %d \n", num1);
            imprimir("    b");
            pula_linha();

            mensagem();
            imprimir("1) a - Logaritmando");
            imprimir("2) b - Base");
            break;

        default:
            imprimir("Usuário digita um valor inválido");
    }

    scanf("%d", &opcao2);

    switch(elemento1) {
        case 'a':
            switch(opcao2) {
                case 1:
                    elemento2 = 'b';
                    break;
                case 2:
                    elemento2 = 'x';
                    break;
                default:
                    printf("Usuário seleciona opção que não existe");
            }
            break;

        case 'b':
            switch(opcao2) {
                case 1:
                    elemento2 = 'a';
                    break;
                case 2:
                    elemento2 = 'x';
                    break;
                default:
                    printf("Usuário seleciona opção que não existe");
            }
            break;

        case 'x':
            switch(opcao2) {
                case 1:
                    elemento2 = 'a';
                    break;
                case 2:
                    elemento2 = 'b';
                    break;
                default:
                    printf("Usuário seleciona opção que não existe");
            }
            break;

    }
    printf("Elemento 1 = %c, elemento 2 = %c \n", elemento1, elemento2);
    // Logaritmando e base (a e c)
    if ((elemento1 == 'a' && elemento2 == 'b') || (elemento1 == 'b' && elemento2 == 'a')) {
        imprimir("Logaritmando e base");
    }

    // Base e logaritmo
    else if ((elemento1 == 'b' && elemento2 == 'x') || (elemento1 == 'x' && elemento2 == 'b')) {
        imprimir("Base e logaritmo");
    }

    // Logaritmando e logaritmo
    else if ((elemento1 == 'a' && elemento2 == 'x') || (elemento1 == 'x' && elemento2 == 'a')) {
        imprimir("Logaritmando e logaritmo");
    }

    // Valor inválido
    else {
        imprimir("erro");
    }
    
    return 0;
}

// Exibe uma mensagem qualquer dando quebra de linha na final dela
void imprimir(string texto) {
    cout << texto << "\n";
}

// Faz quebra de linha
void pula_linha() {
    printf("\n");
}

// Exibe mensagem para escolher elemento
void mensagem() {
    printf("Qual outro elemento você deseja atribuir um valor? \n");
}
