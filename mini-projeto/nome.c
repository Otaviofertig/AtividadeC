#include <stdio.h>

// Protótipo da função (Tarefa 4)
double calcular_media(double a, double b, double c);

int main(void) {
    char nome[50];
    int idade, numeros[5], maior, soma = 0;
    double n1, n2, n3, m;

    // 1. Leia o nome do usuário
    printf("Digite seu nome: ");
    scanf("%s", nome);

    // 2. Leia a idade com validação (idade >= 0)
    do {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        if (idade < 0) {
            printf("Erro: A idade não pode ser negativa!\n");
        }
    } while (idade < 0);

    // 3. Leia 3 notas escolares
    printf("\nOlá %s, digite suas 3 notas:\n", nome);
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    // 4. Calcule a média usando uma função separada
    m = calcular_media(n1, n2, n3);

    // 5. Mostre a situação
    printf("Média: %.2f - ", m);
    if (m >= 7.0) printf("Situação: Aprovado\n");
    else if (m >= 5.0) printf("Situação: Recuperação\n");
    else printf("Situação: Reprovado\n");

    // 6. Peça 5 números, guarde em vetor, mostre a soma e o maior
    printf("\nDigite 5 números inteiros:\n");
    for(int i = 0; i < 5; i++) {
        printf("%dº número: ", i + 1);
        scanf("%d", &numeros[i]);
        
        // Cálculo da soma
        soma += numeros[i];
        
        // Lógica do maior número
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("\n--- Resultados dos Números ---\n");
    printf("Soma total: %d\n", soma);
    printf("Maior número digitado: %d\n", maior);

    return 0;
}

// Função de média (Tarefa 4)
double calcular_media(double a, double b, double c) {
    return (a + b + c) / 3.0;
}