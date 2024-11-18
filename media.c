#include <stdio.h>

int main () {

  int i, a, n, soma=0;
  // i =  quantidade 
  // a = 
  // soma = 0, pois vamos começas com 0 e depois somar
  
  float media; 
  // tem que ser em float pois é numero quebrado


printf ("quantidade de alunos");
scanf("%d", &n);

for (i= 1;i<=n;i++){
  printf ("nota %d:", i);
  scanf ("%d", &a);
  soma = soma + a;
} 
media = soma/i;
printf ("media igual a:%f", media);
}