#include <stdlib.h>
#include <stdio.h>

int main(){
	int n1, n2;
	printf("Digite dois numeros: ");
	scanf("%d %d", &n1, &n2);
	
	if (n1 > n2) {
        printf("Maior: %d\n", n1);     //se o numero 1 for maior que o numero 2 a tela vai mostrar o numero 1
    } else if (n2 > n1) {              //caso contrario se numero 2 for maior que numero1 a tela vai mostrar o numero 2
        printf("Maior: %d\n", n2);
    } else {
        printf("Os numeros sao iguais.\n"); //caso tenha outro fator, ocorre que os numeros sao iguais
    }
    return 0;
}
