#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

int opcao;

printf("Codigo\t Produto\n");
printf("   1\t Novo Jogo\n");
printf("   2\t Carregar Jogo\n");
printf("   3\t Configura��es\n");

printf("Digite o c�digo do produto:\n ");
scanf("%d", &opcao);

system("cls");

switch (opcao){
case 1:
    printf("Fifa\n");
    printf("Pes\n");
    printf("Tomb raide\n");
    break;
case 2:
    printf("Criar conta\n");
    printf("Carregar Conta\n");
    break;
case 3:
    printf("Audio\n");
    printf("Video\n");
    printf("Configura��es Gerais\n");
    break;

default:
printf("Op��o inv�lida");
    break;
}


    return 0;
}
