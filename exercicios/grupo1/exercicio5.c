#include <stdio.h>
int main() {
    int lado, area = 0;
    printf("Digite a medida do lado do quadrado ");
    scanf("%d", &lado);
    area = (lado * lado);
    printf("A área do quadrado de lado %d é %d", lado, area);
    return 0;
}