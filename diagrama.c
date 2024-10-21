#include<stdio.h>

    int main (){
        char estadocivil; 
        
        printf("informe seu estado civil");
        scanf( "%c" ,&estadocivil);

        if(estadocivil=='s'){
            printf("solteiro");
        }
        if(estadocivil=='c'){
            printf("casado");
        }
        if(estadocivil=='d'){
            printf("divorciado");
        }
        if(estadocivil== 'v'){
            printf("viuvo");

        }

    }