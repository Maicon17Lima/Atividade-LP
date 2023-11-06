#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

int i;
int a;

printf("Digite um número:\n ");
scanf("%d", &a);

system("cls");

for (i = a;i > 0; i--)
{
  printf("%d \n", i);
}




    return 0;
}
