#include <stdio.h>

int main(){

    int primo;
    int secondo;
    int risultato;

    printf("\n inserisci primo numero ");
    scanf("d", &primo);

    printf("\n inserisci secondo numero");
    scanf("d", &secondo);

    risultato = primo * secondo;
    printf("\n %d * %d=%d",primo,secondo,risultato);

    return 0;
}