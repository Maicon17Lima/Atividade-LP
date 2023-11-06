#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

int opcao;

printf("Codigo\t Produto\n");
printf("   1\t Camiseta\n");
printf("   2\t Calça\n");
printf("   3\t Sapato\n");

printf("Digite o código do produto:\n ");
scanf("%d", &opcao);

system("cls");

switch (opcao){
case 1:
    printf("Código: 1\n");
    printf("Camiseta\n");
    printf("R$ 50,00\n");
    break;
case 2:
    printf("Código: 2\n");
    printf("Calça\n");
    printf("R$ 150,00\n");
    break;
case 3:
    printf("Código: 3\n");
    printf("Sapato\n");
    printf("R$ 380,00\n");
    break;

default:
printf("Opção inválida");
    break;
}


    return 0;
}
