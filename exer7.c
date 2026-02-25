#include <stdio.h>

int main() {
    float a = 5.0, b = 5.0, c = 8.0;
    float media = (a+b+c) / 3;
    printf("Sua media: %.2f\n", media);
    if (media >= 6.0) printf("Você está Aprovado\n");
    else printf("Você foi Reprovado\n"); 
    return 0;
}

