#include <stdio.h>
int main() {
    int  pacientes;
    int idade;
    int velho=0;
    int i;
    printf("Informe o numero de pacientes:");
    scanf("%d", &pacientes);
  
    for(i=1;i<=pacientes;i++){
     printf("Informe a idade de cada paciente%d:",i);
     scanf("%d", &idade);
     if(velho<idade){
        velho = idade;
     }
    
    }
    printf("O paciente mais velho e: %d",velho);
  
    return 0;
}
 