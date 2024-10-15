#include <stdio.h>
int main(){
   int a , b;
   printf("qual o numeros de folhas copiadas?");
   scanf("%d", &a);
   if (a >= 100 ) {
      b = a * 0.20;
      printf("o valor total a ser pago eh: %d", b);
   }
   else 
   b = a * 0.25;
   printf ("o valor total a ser pago eh: %d", b);
}