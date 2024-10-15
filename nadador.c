#include <stdio.h>
int main(){
   int a;
   printf("qual sua idade?");
   scanf("%d", &a);
   if (a <= 10) {
      printf("Sua categoria eh infantil!!");
      return 0;
   }
   if (a > 10 && a <= 17){
   printf("Sua categoria eh juvenil!!");
   }
   if (a > 17) {
      printf("Sua categoria eh senior!!");
   }
}
