#include <stdio.h>
int main(){
    float a, b;
    float d;
    int c;
    printf("qual a operação desejada?\n (1) adicao;\n (2) subtracao;\n (3) multiplicacao;\n (4) divisao; \n (0) finalizar programa. \n");
    scanf("%d", &c);
    if (c == 1) {
    printf ("quais os numeros a serem somados?(apenas dois)\n\n");
    printf("digite o primeiro numero...");
    scanf("%f", &a);
    printf("digite o segundo numero...");
    scanf("%f", &b);
    d = (a + b);
    printf ("a soma dos dois numeros eh %f\n\n", d);
    return main();
    }
    if (c == 2) {
    printf("quais os numeros a serem subtraidos?(apenas dois)\n\n");
    printf("digite o primeiro numero...");
    scanf("%f", &a);
    printf("qual o segundo numero?...");
    scanf("%f", &b);
    d = (a - b);
    printf (" a subtração dos dois numero eh %f\n\n", d);
    return main();
    }
    if (c == 3) {
    printf("quais os numeros a serem multiplicados?(apenas dois)\n\n");
    printf(" digite o primeiro numero...");
    scanf("%f", &a);
    printf("digite o segundo numero...");
    scanf("%f", &b);
    d = a * b;
    printf("a multiplicacao dos dois numero eh %f\n\n", d);
    return main();
    }
    if (c == 4) {
    printf("quais os numeros a serem dividos?\n\n");
    printf("digite o primeiro numero...");
    scanf("%f", &a);
    printf("digite o segundo numero...");
    scanf("%f", &b);
    if (b == 0) {
    printf("divisao por zero!!\n\n");
    return main();
    }
    d = a / b;
    printf("a divisao dos dois numero eh %f\n\n", d);
    return main();
    }
    if (c == 0) {
    return 0;
    }
}