#include <stdlib.h>
#include <stdio.h>

int main(){
	float nota1, nota2, media;   // float são numeros reais que utiliza nas médias escolares
	
	printf("Digite sua nota 1: ");
	scanf("%f",&nota1);      //%f é variavel de float e e comercial para ler a variavel
	
	printf("Digite sua nota 2: ");
	scanf("%f",&nota2);
	
	media = (nota1+nota2) / 2;
	
	 printf("A média final é: %.2f\n", media);        //%.2f\n   o %.2 vai apresentar 2 casas depois do ponto, o f é de float
	 
	 return 0;
	
	
}
