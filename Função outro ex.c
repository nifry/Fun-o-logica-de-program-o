#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void cabecalho (){
printf("=======================================\n");
printf("\t \tSENAI\n");
printf("=======================================\n \n");
}

void limpatela (){
fflush(stdin);
system("cls || clear");
}

int somar(int n1, int n2) {
int resultado;
resultado = n1 + n2;
return resultado;
}

int main () {
int primeironumero, segundonumero;
int soma;

cabecalho ();
printf("Digite o primeiro n�mero: \n");
scanf("%d", &primeironumero);
limpatela();

printf("Digite o segundo n�mero: \n");
scanf("%d", &segundonumero);
limpatela();

soma = somar(primeironumero, segundonumero);

cabecalho();
printf("Primeiro n�mero: %d \n", primeironumero);
printf("Segundo n�mero: %d \n", segundonumero);
printf("Soma: %d \n", soma);
    return 0;
}