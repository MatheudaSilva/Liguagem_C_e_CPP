#include <stdio.h>

int main()
{
 
 char nome[40];
 float nota1, nota2, nota3, nota4, media;
 
 printf("******* SISTEMA DE MÈDIA *******");
 
 printf("\nNome: ");
 fgets(nome,40,stdin);
 
 printf("\n1°Nota: ");
 scanf("%f", &nota1);
 
 while(nota1 < 0 || nota1 > 10)
 {
    printf("Nota Inválida, digite novamente");
    return(0);
 }
 
 printf("\n2°Nota: ");
 scanf("%f", &nota2);
 
 while(nota2 < 0 || nota2 > 10)
 {
    printf("Nota Inválida, digite novamente");
    return(0);
 }
 
 printf("\n3°Nota: ");
 scanf("%f", &nota3);
 
 while(nota3 < 0 || nota3 > 10)
 {
    printf("Nota Inválida, digite novamente");
    return(0);
 }
 
 printf("\n4°Nota: ");
 scanf("%f", &nota4);
 
 while(nota4 < 0 || nota4 > 10)
 {
    printf("Nota Inválida, digite novamente");
    return(0);
 }
 
 
 media = (nota1 + nota2 + nota3 + nota4)/4;
 if(media <= 5)
 {
    printf("\nNome: %s", nome);
    printf("\n1°B Nota: %.1f", nota1);
    printf("\n2°B Nota: %.1f", nota2);
    printf("\n3°B Nota: %.1f", nota3);
    printf("\n4°B Nota: %.1f", nota4);
    printf("\nMedia Final: %.1f", media);
    printf("\nREPROVADO");
 }
 else
 {
    printf("\nNome: %s", nome);
    printf("\n1°B Nota: %.1f", nota1);
    printf("\n2°B Nota: %.1f", nota2);
    printf("\n3°B Nota: %.1f", nota3);
    printf("\n4°B Nota: %.1f", nota4);
    printf("\nMedia Final: %.1f", media);
    printf("\nAPROVADO");
 }
 
 printf("\n******* FIM DO SISTEMA *******");

}
