#include <stdio.h>

int main()
{
    float vet[5][3], impar, par, dif;
    
    for(int l=0; l<5; l++)
    {
        for(int c=0; c<3; c++)
        {
            printf("Digite os valores: ");
            scanf("%f", &vet[l][c]);
        }
    }
    
    impar = vet[1][0]+vet[2][0]+vet[3][0]+vet[4][0]+vet[5][0]+vet[1][2]+vet[2][2]+vet[3][2]+vet[4][2]+vet[5][2];
    par = vet[1][0]+vet[1][1]+vet[1][2]+vet[3][0]+vet[3][1]+vet[3][2];
    
    printf("Os valores somados das colunas pares e das linhas ímpares, respectivamente, é: %.0f e %.0f\n", impar, par);
    
    impar = impar/10;
    par = par/6;
    printf("A média destes valores é: %.1f e %.1f\n", impar, par);
    
    dif = impar - par;
    printf("A diferença entre estas médias é: %.1f", dif);
}
