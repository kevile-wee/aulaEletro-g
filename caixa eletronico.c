
    #include <stdio.h>
int main(){
    int a;
    printf("escolha a operacao.\n (1) saldo\n (2) extrato\n (3) saque\n (4) sair\n");
    scanf("%d", &a);
    if (a == 1) {printf("seu saldo eh...."); return 0;}
    if (a == 2) {printf("seu extrato eh..."); return 0;}
    if (a == 3) {printf("sacando dinheiro...."); return 0;}
    if (a == 4) {return 0;}

    
}