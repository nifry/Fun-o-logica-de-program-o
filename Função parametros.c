#include<stdio.h>
#include<stdlib.h>


void cabecalho (){
printf("==========================\n");
printf("\tSENAI\n" );
printf("==========================\n \n");
}

void limpatela (){ 
fflush(stdin);
system("cls || clear");
}

void mostraridade(int idade){
printf("Idade: %d \n", idade);
} 

int main () {

char nome[200];
int idade;

cabecalho ();
printf("Digite seu nome: \n");
gets(nome);
limpatela();

printf("Digite sua idade: \n");
scanf("%d", &idade);
limpatela();

cabecalho();
printf("Nome: %s \n",nome);
mostraridade(idade);

    return 0;
}