#include <stdlib.h>
#include <stdio.h>

 int main(){
 	int numero;
 	printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
     printf("Antecessor: %d\n", numero - 1);  // \n quebra de linha e o antecessor -1 do numero
    printf("Sucessor: %d\n", numero + 1);     // +1 do numero sucessor
    
    return 0;
 }
