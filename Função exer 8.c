#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float IMC (float pe, float alt){
float resultado;
resultado = (pe * pe) / alt;

if (resultado < 18.5)
{
    printf("Classificação:Abaixo do peso \n");
    printf("Recomenda: Consulte um nutricionista \n");
}if (resultado >= 18.5 || resultado <= 29.9)
{
    printf("Classificação: Peso normal \n");
    printf("Recomenda: Mantenha hábitos saudaveis \n");
}if (resultado >= 25 || resultado <= 29.9 )
{
    printf("Classificação: Sobrepeso \n");
    printf("Recomenda: Considera uma dieta balanceada e ativadade física \n");
}if (resultado >= 30 || resultado <= 34.9)
{
    printf("Classificação: Obesidade grau 1 \n");
    printf("Recomenda: Procure orientação de um profissional de saúde \n");
if (resultado >= 35 || resultado <= 39.9)
{
    printf("Classificação: Obesidade grau 2 \n");
    printf("Recomenda: Consulte um médico para avaliação e orientação \n");
}if (resultado >= 40)
{
    printf("Classificação: Obesidade grau 3 \n");
    printf("Recomenda: Busque assistencia médica imediatamente \n");
} 
}
}

int main () {
setlocale(LC_ALL, "portuguese");
float peso;
float altura;
float massa;

printf("Digite seu peso:");
scanf("%f", &peso);
printf("Digite sua altura:");
scanf("%f", &altura);

 massa = IMC (altura, peso);

 printf("Peso:%.2f \n", peso);
 printf("Altura: %.2f \n", altura);
 printf("Indice de massa corporea: %.2f \n", massa);
 
    return 0;
}