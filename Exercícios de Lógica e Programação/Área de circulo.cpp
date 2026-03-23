#include <stdlib.h>
#include <stdio.h>

int main(){
	float raio, area, perimetro;
	float pi = 3.14159;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	area = pi * (raio * raio);      //raio ao quadrado
	perimetro = 2 * pi * raio;
	
	printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);
    
    return 0;

}
