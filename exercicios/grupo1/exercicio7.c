#include <stdio.h>
int main() {
    int altura, comprimento, area = 0;
    printf("Digite a altura do retângulo: ");
    scanf("%d", &altura);
    printf("Digite o comprimento do retângulo: ");
    area = (altura * comprimento);
    printf("A área do retângulo, cuja altura: %d e comprimento: %d é %d", altura, comprimento, area);
    return 0;
}
