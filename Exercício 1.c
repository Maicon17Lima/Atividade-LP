#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int temperatura;

    printf("Informe a temperatuda: ");
    scanf("%d", &temperatura);


    if (temperatura > 25){
        printf("Dia ensolarado.");

    }else if (temperatura < 15){
    printf("Dia chuvoso");

    }else{
     printf("Dia nublado.");
    }




    

    return 0;
}