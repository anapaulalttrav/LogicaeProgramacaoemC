#include <stdlib.h>
#include <stdio.h>

int main(){       //Esse é o código padrão de entrada do código
	int num1, num2, soma;        //criar variavéis para executar no código
	printf("Digite o primeiro numero:  ");
	scanf("%d", &num1);    //%d é para o comando entender que são numeros inteiros ou %i e o & comercial para ler o numero 1 que foi digitado pela pessoa
	
	printf("Digite o segundo numero:  ");
	scanf("%d", &num2); 
	
	soma=num1 + num2;
	
	printf("A soma de %d + %d é: %d\n", num1, num2, soma);  //%d para somar os numeros inteiros e colocar todas variavéis criadas
	
	return 0;
}
