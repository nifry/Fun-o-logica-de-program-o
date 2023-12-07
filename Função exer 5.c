#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void verificar (int numero[]) {
int i, pares  = 0, impares = 0;
int numero;

    for (i = 0; i < 6; i++)
    {
        if (numero[i] % 2 == 0)
        {
        pares ++;
        } else {
            impares ++;
        }
    }
printf("Quantidade de pares: %d \n", pares);
printf("Quantidade de imapres: %d \n", impares);

}

int main () {
int numero[6], i;

 for (i = 0; i < 6 ; i++){
 printf("Digite o número:");
    scanf("%d", &numero[i]);
 }

 verificar(numero);
    return 0;
}