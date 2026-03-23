#include <stdio.h>
#include <stdlib.h>

int main(){
	int anoAtual, idade, anoNascimento;
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	anoNascimento= anoAtual-idade;
	printf("Você nasceu em: %d\n", anoNascimento);
	
	return 0;
}
