#include <stdio.h>

int main() {
    char nome[20];
    int idade;
    printf("Digite o nome:");
    scanf("%s",&nome);
    printf("Digite o idade:");
    scanf("%d",&idade);
    printf("Nome:%s e idade %d",nome,idade);
}