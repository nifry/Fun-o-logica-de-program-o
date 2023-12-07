#include<stdio.h>
#include<stdlib.h>

void decisao (int numero){

if (numero % 2 ==0){
    printf("par.  \n");
}else{
    printf("Impar. \n");
}
}

int main () {

int numero;

printf("Digite um número:");
scanf("%d", &numero);

decisao (numero);

    return 0;
}