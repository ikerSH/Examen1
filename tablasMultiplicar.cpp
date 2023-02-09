#include <stdio.h>

int numero;
int mul;

int main()
{
    printf("TABLAS DE MULTIPLICAR \n\n");

    printf("Ingresa un número: ");
    scanf("%d", &numero);
    
    mul = numero;

    printf("%d * 1 = %d \n", mul, numero * 1);
    printf("%d * 2 = %d \n", mul, numero * 2);
    printf("%d * 3 = %d \n", mul, numero * 3);
    printf("%d * 4 = %d \n", mul, numero * 4);
    printf("%d * 5 = %d \n", mul, numero * 5);
    printf("%d * 6 = %d \n", mul, numero * 6);
    printf("%d * 7 = %d \n", mul, numero * 7);
    printf("%d * 8 = %d \n", mul, numero * 8);
    printf("%d * 9 = %d \n", mul, numero * 9);
    printf("%d * 10 = %d \n", mul, numero * 10);

    return 0;
}