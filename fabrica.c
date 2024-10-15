#include <stdio.h>
int main(){
   int a, b, c;
   printf("qual a quantidade de pecas produzidas??\n\n");
   scanf("%d", &a);
   printf("Qual o numero de pecas defeituosas?\n\n");
   scanf("%d", &b);
   c = a * 10 / 100;
   if (b >= c){
   printf("a maquina prescisa de manuntecao");
   return 0;
   }
   printf("nao prescisa de manutencao");
}