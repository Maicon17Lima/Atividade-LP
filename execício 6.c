#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

int opcao;

printf("Codigo\t Produto\n");
printf("   1\t Camiseta\n");
printf("   2\t Cal�a\n");
printf("   3\t Sapato\n");

printf("Digite o c�digo do produto:\n ");
scanf("%d", &opcao);

system("cls");

switch (opcao){
case 1:
    printf("C�digo: 1\n");
    printf("Camiseta\n");
    printf("R$ 50,00\n");
    break;
case 2:
    printf("C�digo: 2\n");
    printf("Cal�a\n");
    printf("R$ 150,00\n");
    break;
case 3:
    printf("C�digo: 3\n");
    printf("Sapato\n");
    printf("R$ 380,00\n");
    break;

default:
printf("Op��o inv�lida");
    break;
}


    return 0;
}
