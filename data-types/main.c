#include <stdio.h>

int main()
{

    int firstNumber;
    int secondNumber;

    printf("Ingrese primer valor: ");
    scanf("%d", &firstNumber);
    printf("Ingrese segundo valor: ");
    scanf("%d", &secondNumber);

    int result = firstNumber + secondNumber;

    printf("Resultado: %d \n", result);

    return 0;
}