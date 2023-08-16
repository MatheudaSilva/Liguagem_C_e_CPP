#include <stdio.h>

int gasto, opcoes;

int main()
{
    
    printf("Digite o valor gasto em nossa loja: ");
    scanf("%d", &gasto);
    printf("Escolha a opção desejada para pagamento, sendo:\n(1) Opção: a vista com 10 por cento de desconto\n");
    printf("(2) Opção: em duas vezes (preço da etiqueta)\n");
    printf("(3) Opção: de 3 até 10 vezes com 3 por cento de juros ao mês (somente para compras acima de R$ 100,00)\n");
    scanf("%d", &opcoes);
    
    if(opcoes == 1 || opcoes == 2)
    {
        calcula_gasto1e2(gasto, opcoes);
    }
    else if(opcoes == 3)
    {
        calcula_gasto3(gasto);
    }
}

int calcula_gasto1e2()
{
    float valor_calculado;
    switch(opcoes)
    {
        case 1:
        valor_calculado = gasto * 0.90;
        printf("O valor a vista com o desconto de 10 por cento fica %.2f", valor_calculado);
        break;
        
        case 2:
        valor_calculado = gasto / 2;
        printf("O valor final é 2 parcelas de %.2f", valor_calculado);
        break;
    }
}
int calcula_gasto3()
{
    if(gasto <= 100)
    {
        printf("Desculpe, como informado, só é possível utilizar a 3° opção para compras acima de R$100");
        return 0;
    }
    
    int parcelas;
    float valor_calculado;
    
    printf("Digite um número para a quantidade de parcelas, sendo: (3)3x, (4)4x, (5)5x, (6)6x, (7)7x, (8)8x, (9)9x, (10),10x: \n");
    scanf("%d", &parcelas);
    
    valor_calculado = (gasto * 1.30) / parcelas;
    printf("O valor gasto, parcelado em %dx com juros de 3 por cento ao mês, fica no valor de %.2f ", parcelas, valor_calculado);
}
