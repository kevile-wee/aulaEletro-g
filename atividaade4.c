#include<stdio.h>

    int main(){

        float media;
        float N1;
        float N2;
        float N3;
        float N4;

        printf("informe a N1:");
            scanf("%f" ,&N1);
        
        printf("informe a N2:");
            scanf("%f" ,&N2);

        printf("informe a N3:");
            scanf("%f" ,&N3);

        printf("informe a N4");
            scanf("%f" ,&N4);

            media = (N1 + N2 + N3 + N4) / 4;
            printf("%f" ,media);


        if( media>= 7){

            printf("aprovado");}

        if(media > 4 && media < 7){

            printf("final");}
            
        if( media < 4){
            
            printf("reprovado ");}
    }

    