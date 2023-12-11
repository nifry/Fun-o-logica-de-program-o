#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


float calculo(float n1, float n2, float n3) {
float media;
media = (n1 + n2 + n3) / 3;

return media;
}


int main () {
float nota1;
float nota2;
float nota3;
float resultado;

setlocale(LC_ALL, "portuguese");
printf("Digite sua primeira nota");
scanf("%f", &nota1);
printf("Digite sua segunda nota:");
scanf("%f", &nota2);
printf("Digite seua terceira nota:");
scanf("%f", &nota3);

resultado = calculo(nota1, nota2, nota3);

printf("1º Nota: %.1f \n", nota1);
printf("2 º Nota: %.1f \n", nota2);
printf("3º Nota: %.1f \n", nota3);
printf("Média: %.2f \n", resultado);


    return 0;




}



//#include<stdio.h>
//#include<stdlib.h>
//#include<locale>

//#define TAM 3

//float verifcarmedia (float notas[]){
//int i;
//float somanotas = 0, media;
//for(i = 0; i < TAM; i++){

// somanotas += notas[i];

//}
// media = somanotas / i;
// return media;

//}

//int main ()  {
//setlocale(LC_ALL, "portuguese");

// float notas[TAM], media;
// int i;

// for(i = 0; i < TAM; i++)
//{
   // printf("Digite a nota:", i + 1);
   // scanf("%f", &notas[i]);
//}
//media = verificarmedia(notas);

//printf("Média: %.2f \n", media);

//return 0;
//}




