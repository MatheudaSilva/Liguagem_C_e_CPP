#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1, num2, so, p, q1, rq, se, mo;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite um outro número: ");
    scanf("%d", &num2);
    
    so = num1 + num2;
    printf("A soma dos valores é: %d\n", so);
    p = num1 * (pow(num2, 2));
    printf("O resultado da multiplicação do primeiro valor pelo quadrado do segundo é: %d\n", p);
    q1 = pow(num1, 2);
    printf("O quadrado do primeiro valor é: %d\n", q1);
    rq = sqrt(pow(num1, 2) + pow(num2, 2));
    printf("A raiz quadrada da soma dos valores ao quadrado é: %d\n", rq);
    mo = abs(num1);
    printf("O módulo do primeiro número é: %d\n", mo);
}
