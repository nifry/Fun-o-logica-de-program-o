#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void venda(numero){

if (numero < 100)
{
    numero + 0.10;

    printf("Seu acrescimo é de 10 por cento");
} if (numero >= 100)
{
    numero + 0.20;
    printf("Seu acrescimo é de 20 por cento");
  
  
}

}

int main () {
    setlocale(LC_ALL, "portuguese");
float numero;


printf("Digite o preço do seu produto:");
scanf("%f", &numero);

venda (numero);


    return 0;
}