#include <stdio.h>

// Tarefa 4: Funcao para calcular a media
double calcular_media(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

int main(void) {
    char nome[50];
    int idade, numeros[5], maior, soma = 0;
    double n1, n2, n3, m;

    // 1. Leitura do nome
    printf("Digite seu nome: ");
    scanf("%s", nome);

    // 2. Leitura da idade com validacao
    do {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        if (idade < 0) {
            printf("Erro: A idade nao pode ser negativa!\n");
        }
    } while (idade < 0);

    // 3. Leitura das 3 notas
    printf("\nOla %s, digite suas 3 notas:\n", nome);
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    // 4. Calculo da media usando a funcao
    m = calcular_media(n1, n2, n3);

    // 5. Mostrar situacao sem caracteres especiais
    printf("Media: %.2f - ", m);
    if (m >= 7.0) printf("Situacao: Aprovado\n");
    else if (m >= 5.0) printf("Situacao: Recuperacao\n");
    else printf("Situacao: Reprovado\n");

    // 6. Vetor de 5 numeros, soma e maior valor
    printf("\nDigite 5 numeros inteiros:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d. numero: ", i + 1);
        scanf("%d", &numeros[i]);
        
        soma += numeros[i]; // Soma acumulada
        
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i]; // Definicao do maior
        }
    }

    printf("\n--- Resultados dos Numeros ---\n");
    printf("Soma total: %d\n", soma);
    printf("Maior numero digitado: %d\n", maior);

    return 0;
}