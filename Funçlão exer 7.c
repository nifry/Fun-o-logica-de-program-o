#include<stdio.h>
#include<stdlib.h>
#include<locale>
#include<string.h>

#define TAM 3

float verifcarmedia (float notas[]){
int i;
float somanotas = 0, media;
for(i = 0; i < TAM; i++){

 somanotas += notas[i];

}
 media = somanotas / i;
 return media;
}

int main (){
setlocale(LC_ALL, "portuguese");

 float notas [TAM];
 float media;
 int i;

 for(i = 0; i < TAM; i++)
{
    printf("Digite a nota:", i + 1);
    scanf("%f", &notas[i]);
}

media = verificarmedia(notas);

printf("Média: %.2f \n", media);
printf("Resultado: %s \n", resultado);

return 0;
}