#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    printf("----------------------------\n");
    printf("Nome: a | Endereco: %p | Valor: %d\n", (void*)&a, a);
    printf("Nome: b | Endereco: %p | Valor: %d\n", (void*)&b, b);
    printf("Nome: c | Endereco: %p | Valor: %d\n", (void*)&c, c);

    return 0;
}
