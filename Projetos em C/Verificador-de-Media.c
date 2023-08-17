#include <stdio.h>

int main()
{
    int vet[10], i, T;
    
    for(i=0; i<10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }
    
    for(i=0; i<10; i++)
    {
        if(vet[i] = (vet[0]+vet[1]+vet[2]+vet[3]+vet[4]+vet[5]+vet[6]+vet[7]+vet[8]+vet[9])/10)
        {
            T = vet[i];
        }
    }
    printf("O número que representa a média dos valores inseridos é: %d", T);
}
