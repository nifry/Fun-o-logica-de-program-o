#include<stdio.h>
#include<stdlib.h>

int decisao (){
int n1;

if (n1 % 2 ==0){
    printf("%d e par.  \n", n1);
}else{
    printf("%d e Impar. \n", n1);
}
}

int main () {

int numero;

printf("Digite um número:");
scanf("%d", &numero);

decisao (numero);

    return 0;
}