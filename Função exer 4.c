#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int calculo1 (int num1, int num2){
int soma;
soma = num1 + num2;
}

int calculo2 (int num1, int num2){
int subtracao;
subtracao = num1 - num2;
}

int calculo3 (int num1, int num2){
int multiplicacao;
multiplicacao = num1 * num2;
}

int calculo4 (int num1, int num2) {
int divisao;
divisao = num1 / num2;
}
//Variaveis

int main () {
int resultado1, resultado2, resultado3, resultado4;
int n1;
int n2;

printf("Digite primeiro n�mero:");
scanf("%d", &n1);
printf("Digite segundo n�mero");
scanf("%d", &n2);
    
//C�lculos

 resultado1 = calculo1(n1, n2);
 resultado2 = calculo2(n1, n2);
 resultado3 = calculo3(n1, n2);
 resultado4 = calculo4(n1, n2);

//Resultados 

printf("Primeiro n�mero: %d \n", n1);
printf("Segundo n�mero: %d \n", n2);
printf("Resultado Soma: %d \n", resultado1);
printf("Resultado Subtra��o: %d \n", resultado2);
printf("Resultado Multiplica�a�: %d \n", resultado3);
printf("Resultado Divis�o: %d \n", resultado4);
    return 0;


//Outra froma de resolver


//#include <stdio.h>

//void cabecalho() {
    printf("\n=======================\n");
    printf("\tSENAI");
    printf("\n=======================\n");
}

//int somar(int n1, int n2) {
  //  int resultado;
   // resultado = n1 + n2;
   
    //return resultado;
//}

//int subtrair(int n1, int n2) {
  //  int resultado;
   // resultado = n1 - n2;
   
   // return resultado;
//}

//int multiplicar(int n1, int n2) {
  //  return n1 * n2;
//}

//float dividir(int n1, int n2) {
  //  return n1 / (float) n2;
//}

//int main() {
   
//    int primeiroNumero;
//    int segundoNumero;
//    int soma;
//    int subtracao;
//    int multiplicacao;
//    float divisao;
   
 //   cabecalho();
 //   printf("Digite o primeiro numero: ");
 //   scanf("%d",&primeiroNumero);
   
 //   printf("Digite o segundo numero: ");
 //   scanf("%d",&segundoNumero);
   
  //  soma = somar(primeiroNumero, segundoNumero);
  //  subtracao = subtrair(primeiroNumero, segundoNumero);
  //  multiplicacao = multiplicar(primeiroNumero, segundoNumero);
  //  divisao = dividir(primeiroNumero, segundoNumero);
   
   // cabecalho();
   // printf("Primeiro numero: %d \n", primeiroNumero);
   // printf("Segundo numero: %d \n", segundoNumero);
   // printf("Soma: %d \n", soma);
   // printf("Subtracao: %d \n", subtracao);
   // printf("Multiplicacao: %d \n", multiplicacao);
   // printf("Divisao: %.2f \n", divisao);
   
    //return 0;
//}







