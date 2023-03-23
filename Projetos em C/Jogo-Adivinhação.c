#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("************************************\n");
    printf("* Bem-vindo ao jogo de adivinhação *\n");
    printf("************************************\n");
    
    // definindo a variável segundos como o tempo atual e colocando ela como a "semente" do número randômico.
    int segundos = time(0);
    srand(segundos);
    //passando um número randômico para a variável ngrande
    int ngrande = rand();
    int numerosecreto = ngrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int nivel;
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    
    switch(nivel)
    {
        case 1:
        tentativas = 15;
        break;
        
        case 2:
        tentativas = 10;
        break;
        
        case 3:
        tentativas = 5;
        break;
    }
    
    while(chute != numerosecreto)
    {
        printf("Tentativa %d\n", tentativas);
        printf("Qual seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
        
        if(chute < 0)
        {
            printf("Você não pode chutar números negativos. Chute outro!\n");
            // Usado para indicar para o progama retornar ao "for"
            continue;
        }
        
        int maior = chute > numerosecreto;
        
        if(maior)
        {
                printf("Seu chute foi maior que o número secreto\n\n");
        }
        else
        {
                printf("Seu chute foi menor que o número secreto\n\n");
        }
        tentativas--;
        if(tentativas == 0)
        {
            break;
        }
// realizando o casting para converter a variável e abs para pegar o  valor absoluto do número      
        double pontosperdidos = abs((double)(chute - numerosecreto)) / 2.0;
        pontos = pontos - pontosperdidos;
    }
    if(chute == numerosecreto)
    {
        printf("\nParabéns, você acertou!!\n");
        printf("Você acertou na %d° tentativa\n", tentativas);
        printf("Total de pontos %.1f\n", pontos);
    }
    else
    {
        printf("Fim de jogo, você perdeu.\n");
        printf("Jogue Novamente!!\n");
    }
}
