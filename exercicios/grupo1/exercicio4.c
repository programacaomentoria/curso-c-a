#include <stdio.h>
int main() {
    float numero, quadrado = 0;
    printf("Digite um numero ");
    scanf("%f", &numero);
    quadrado = (numero * numero);
    printf("O quadrado do número %.2f é %.2f", numero, quadrado);
    return 0;
}
