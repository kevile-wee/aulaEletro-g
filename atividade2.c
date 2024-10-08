#include<stdio.h>

int main(){
    float quilometros;
    float combustivel;
    float media;

    printf("coloque quantos quilometros percorreu:");
    scanf("%f",&quilometros);
    printf("combustivel:");
    scanf("%f",&combustivel);
    media = quilometros/ (combustivel);
    printf("%f media %f  quilometros %fcombustivel" , media , quilometros , combustivel);
    return 0;
}