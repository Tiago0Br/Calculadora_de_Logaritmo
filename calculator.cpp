#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Declaração das funções
void calcular_logaritmo(float a, float b);
void calcular_logaritmando(float a, float x);
void calcular_base(float b, float x);
void escrever(string texto);

int main() {
    // Declaração de variáveis
    float b, a, x;
    int opcao;

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
            scanf("%f", &a);
            printf("Log b = x \n");
            printf("    %.2f \n\n", a);
            printf("Digite o valor do logaritmando: ");
            scanf("%f", &b);
            printf("Log %.2f = x \n", b);
            printf("    %.2f \n\n", a);
            calcular_logaritmo(a, b);

            break;

        case 2:
            // Base e logaritmo
            printf("Digite o valor da base: ");
            scanf("%f", &a);
            printf("Log b = x \n");
            printf("    %.2f \n\n", a);
            printf("Digite o valor do Logaritmo: ");
            scanf("%f", &x);
            printf("Log b = %.2f \n", x);
            printf("    %.2f \n\n", a);
            calcular_logaritmando(a, x);

            break;

        case 3:
            // Logaritmando e logaritmo
            printf("Digite o valor do logaritmando: ");
            scanf("%f", &b);
            printf("Log %.2f = x \n", b);
            printf("    a \n\n");
            printf("Digite o valor do logaritmo: ");
            scanf("%f", &x);
            printf("Log %.2f = %.2f \n", b, x);
            printf("    a \n\n");
            calcular_base(b, x);

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

// Dado a base e o logaritmando, calcula o logaritmo
void calcular_logaritmo(float a, float b) {
    float x;
    if(a==1) {
        printf("A base não pode ser igual a 1! \n");
    }
    else if(a==b){
        printf("Quando o logaritmando e a base forem iguais o logaritmo será 1 \n");
        x = 1;
    }

    else if (b==1) {
        printf("Quando logaritmando for 1 o logaritmo sempre será 0 \n");
    }

    else {
        // calcular o valor x para dar o resultado
        x = log(b)/log(a);
        printf("Logaritmo = %.2f \n", x);
    }

    printf("\nLog %.2f = %.2f \n", b, x);
    printf("    %.2f", a);

}

// Dado a base e o logaritmo, calcula o logaritmando
void calcular_logaritmando(float a, float x) {
    float b;
    if (x==0){
        printf ("Todo logaritmo = 0 o logaritmando será 1.\n");
    } else if(a==1) {
        printf("A base não pode ser igual a 1! \n");
    } else {
        b = 1;
        for(int i=0; i<(x); i++) {
            b *= a;
        }
        printf("O logaritmando de base %.2f é %.2f", a, b);
    }

    printf("\nLog %.2f = %.2f \n", b, x);
    printf("    %.2f", a);
}

// Dado o logaritmando e o logaritmo, calcula a base
void calcular_base(float b, float x) {
    float a;
    if(x==1){
        printf("Se o Logaritmo = 1, Então a Base = %.2f. \n", b);
        a = b;
    }
    else {
        a = pow(b, 1.0/x);
        printf("Log: %.2f = %.2f \n", b, x);
        printf("Base: %.2f \n", a);
    }

    printf("\nLog %.2f = %.2f \n", b, x);
    printf("    %.2f", a);
}
