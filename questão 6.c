#include <stdio.h>

int main()
{
int numero; 
printf("Digite um numero: ");
scanf("%d", &numero);


if (numero % 2 == 0) {
printf("\nO numero e par.\n", numero);
}

// testa se o número é impar
if (numero % 2 != 0) {
printf("\nO numero e impar\n.", numero);
}

return 0;
}