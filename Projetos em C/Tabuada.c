#include <stdio.h>

int main()
{
    int num;
    int i;
    int res;
    
    printf("Escolha um número: ");
    scanf("%d", &num);
    
    printf("Tabuada de %d\n", num);
    
    for(i = 1; i <= 10; i++)
    {
        res = num * i;
        printf("%d x %d = %d\n", num, i, res);
    }
}
