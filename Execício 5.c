#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

int opcao;

printf("Escolha o indioma desejado:\n");
printf("Codigo\t Indioma\n");
printf("   1\t Ingles\n");
printf("   2\t Espanhol\n");
printf("   3\t Franc�s\n");

printf("Digite o c�digo do indioma desejado: ");
scanf("%d", &opcao);

switch (opcao){
case 1:
    printf("Welcome");
    break;
case 2:
    printf("Bienvenida");
    break;
case 3:
    printf("Accueillir");
    break;

default:
printf("Op��o inv�lida");
    break;
}


    return 0;
}
