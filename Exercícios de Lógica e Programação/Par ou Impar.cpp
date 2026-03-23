#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Se o resto da divisao por 2 for 0, eh par
    if (num % 2 == 0) {
        printf("%d eh Par.\n", num);
    } else {
        printf("%d eh Impar.\n", num);
    }
    return 0;
}
