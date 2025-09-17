#include <stdio.h>

int main() {
    char nome[50] = "";
    float nota1, nota2, nota3, nota4, media = 0;

    printf("Qual seu nome? ");
    scanf("%s", nome);

    printf("Qual seu nota 1? ");
    scanf("%f", &nota1);
    printf("Qual seu nota 2? ");
    scanf("%f", &nota2);
    printf("Qual seu nota 3? ");
    scanf("%f", &nota3);
    printf("Qual seu nota 4? ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("Seu nome é %s e sua média é: %.2f", nome, media);

    return 0;
}