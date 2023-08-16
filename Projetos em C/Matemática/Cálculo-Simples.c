#include <stdio.h>

int main()
{
    int num1, num2, res, opera;
    
    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite um outro valor: ");
    scanf("%d", &num2);
    printf("Escolha um operador, sendo: (1)+, (2)-, (3)x e (4)÷: ");
    scanf("%d", &opera);
    
    switch(opera)
    {
        case 1:
        res = num1 + num2;
        printf("\nOs valores somados resultam: %d", res);
        break;
        
        case 2:
        res = num1 - num2;
        printf("\nOs valores subtraídos resultam: %d", res);
        break;
        
        case 3:
        res = num1 * num2;
        printf("\nOs valores multiplicados resultam: %d", res);
        break;
        
        case 4:
        res = num1 / num2;
        printf("\nOs valores divididos resultam: %d", res);
        break;
    }
    
}
