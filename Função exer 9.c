#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 3

struct dados {
    
    char nome[200];
    float nota[3];
    float media;
};

float calculo (struct dados aluno) {
float somanotas = 0;
int i;

for (i = 0; i < TAM; i++){
    somanotas += aluno.nota[i];
}
return somanotas / i;
}

int main () {
setlocale(LC_ALL, "portuguese");
struct dados aluno;
int i;

    printf("Digite seu nome:");
    scanf("%s", &aluno.nome);


for (i = 0; i < 3; i++) {
printf("Digite sua nota:", i + 1);
scanf("%f", &aluno.nota[i]);
}


aluno.media = calculo(aluno);
printf("\nMédia: %.2f \n",aluno.media);

return 0;
}