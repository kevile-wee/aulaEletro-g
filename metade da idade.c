
#include <stdio.h>
int main(){
    int a, b, c, d;
    printf("digite sua idade, e separando pela metade. exp: 1987 = 19 + 87\n");
    printf("digite os dois primeiros numeros\n");
    scanf("%d", &a);
    printf("digite os dois ultimos numeros\n");
    scanf("%d", &b);
    c = (a + b) / 5;
    d = (a + b) - (5 * c);
    if  (d == 0){printf("voce eh timido\n");return 0;}
    if  (d == 1){printf("voce eh sonhador\n");return 0;}
    if  (d == 2){printf("voce eh paquerador\n");return 0;}
    if  (d == 3){printf("voce eh atraente\n");return 0;}
    if  (d == 4){printf("voce eh inrresistivel\n");return 0;}

}