#include <stdio.h>

int main(){
    int primo;
    int secondo;
    int risultato;
    float media;

    printf("\n inserisci il primo numero\n");
    scanf("%d",&primo);

    printf("\n inserisci secono numero\n");
    scanf("%d",&secondo);

    media=(float)(primo+secondo)/2;
    printf("la media è %6.2f\n ",media);
}