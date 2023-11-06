#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

   setlocale(LC_ALL, "portuguese");

   float valor;
   char [200]dia ;
   float desconto;
   float resultado;

   printf("Informe o valor R$ ");
   scanf("%f", &valor);

   gets(dia);  printf("É final de semana (S) ou (N). ");


   system("cls || clear");
   
   
   
   if(dia == sim){
   	resultado = valor - (valor * 0.1);
   	desconto = (valor * 0.1);
   
   }
	printf("Valor a pagar %.2f", resultado);
	
	
   /*switch (dia)
   {
   case 'n':
      resultado = valor - (valor * 0.1);
      //desconto = (valor * 0.1);
      
      printf("Valor a pagar %.2f", resultado);

     
      break;

   case 's':
   
       resultado = valor - (valor * 0.15);
      //desconto = (valor * 0.15);
      
       printf("Valor a pagar %.2f", resultado);

   
   default:
     printf("Opção inválida");
      break;*/
   }
   
   getchar(); //Pausa no Windows e Linux
   return 0;
}