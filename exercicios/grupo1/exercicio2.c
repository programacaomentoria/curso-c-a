#include <stdio.h>

int main() {
    char nome[50] = "";
    int idade = 0;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Seu nome é %s e sua idade é %d", nome, idade);
    return 0;
}