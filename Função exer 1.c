#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

void cabecalho (){
printf("=======================================\n");
printf("\t \tSENAI\n");
printf("=======================================\n \n");
}

void limpatela (){
fflush(stdin);
system("cls || clear");
}

float calculo(float n1, float n2) {
float resultado;
resultado = (n1 + n2) / 2 ;
return resultado;
}

int main () {
setlocale(LC_ALL, "portuguese");
float primeironumero, segundonumero;
float media;

cabecalho ();
printf("Digite o primeiro n�mero: \n");
scanf("%f", &primeironumero);
limpatela();

printf("Digite o segundo n�mero: \n");
scanf("%f", &segundonumero);
limpatela();

media = calculo(primeironumero, segundonumero);

cabecalho();
printf("Primeiro n�mero: %.2f \n", primeironumero);
printf("Segundo n�mero: %.2f \n", segundonumero);
printf("Media: %.2f \n", media);
    return 0;
}


















