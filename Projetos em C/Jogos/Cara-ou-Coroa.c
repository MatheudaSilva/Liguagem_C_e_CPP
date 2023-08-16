#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int C, Rand;
    
    Rand = time(0);
    srand(Rand % 100);
    
    printf("Escolha (1)Cara ou (2)Coroa\n");
    scanf("%d", &C);
    
    switch(C)
    {
        case 1:
        if(Rand == 0)
        {
            printf("Parabéns, você acertou. :)");
        }
        else if(Rand == 1)
        {
            printf("Ops, você errou!");
        }
        break;
        
        case 2:
        if(Rand == 0)
        {
            printf("Ops, você errou!");
        }
        else if(Rand == 1)
        {
            printf("Parabéns, você acertou. :)");
        }
        break;
    }
}
