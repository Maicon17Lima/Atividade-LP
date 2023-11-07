#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(lc_all, "portuguese");

    int numero;
    int resultado =0;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i=2; i = 0; i <= numero / 2; i++){
        if (numero % i == 0){
            resultado++;
            break;
        }
        
    }
    if (resultado == 0){
        printf("%d; E um numero primo", numero );

    }else
    printf("%d não e numero primo", numero);

    return 0;    

}