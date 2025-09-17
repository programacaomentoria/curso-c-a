#include <stdio.h>
int main() {
	const float PI = 3.14159;
	float raio, area = 0;
    printf("Digite o raio do círculo ");
    scanf("%f", &raio);
    area = PI * (raio * raio);
    printf("A área do círculo cujo raio %.2f é %.2f", raio, area);
    return 0;
}
