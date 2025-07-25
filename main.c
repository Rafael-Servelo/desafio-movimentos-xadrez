#include "stdio.h"

int main()
{
    //Movimento da Torre
    printf("\nTorre:\n");
    for(int i= 0; i < 5; i++){
        printf("Direita\n");
    }

    //Movimento do Bispo
    printf("\nBispo:\n");
    int i=0;
    while (i < 5)
    {
        printf("Cima, Direita\n");
        i++;
    }

    //Movimento da Rainha
    i = 0;
    printf("\nRainha:\n");
    do
    {
        i++;
        printf("Esquerda\n");
    } while (i < 8);
    
    

    return 0;
}