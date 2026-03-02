#include<stdio.h>

double media (
    double a, double b, double c
);

int main(void) {
    double n1, n2, n3, m;
    int numeros[5];
    int maior;

    printf("Digite as notas:\n")
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    m = media(n1, n2, n3);

    if ( m <= 7.0) printf(" Aprovado ");
    else if( m >= 5) printf("Recuperaçaõ\n");
    else printf("Reprovado\n");

    printf("\nDigite 5 números inteiros:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    printf("O maior número digitado foi: %d\n", maior);

    return 0;
}

// Função que calcula a média aritmética
double media(double a, double b, double c) {
    return (a + b + c) / 3.0;
}
