#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite um outro valor: ");
    scanf("%d", &num2);
    
    if(num1 < num2)
    {
        printf("\nValores entre o %d e %d: \n", num1, num2);
        for(int i = num1; i <= num2; i++)
        {
            printf("%d\n", i);
        }
        printf("\nValores entre o %d e %d em ordem decrescente: \n", num1, num2);
        for(int i = num2; i >= num1; i--)
        {
            printf("%d\n", i);
        }
    }
    else if(num1 = num2)
    {
        printf("Os valores são iguais, por favro digite novamente.");
    }
}
