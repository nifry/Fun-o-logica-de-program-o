#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float IMC (float pe, float alt){
float resultado;
resultado = (pe * pe) / alt;

if (resultado < 18.5)
{
    printf("Classifica��o:Abaixo do peso \n");
    printf("Recomenda: Consulte um nutricionista \n");
}if (resultado >= 18.5 || resultado <= 29.9)
{
    printf("Classifica��o: Peso normal \n");
    printf("Recomenda: Mantenha h�bitos saudaveis \n");
}if (resultado >= 25 || resultado <= 29.9 )
{
    printf("Classifica��o: Sobrepeso \n");
    printf("Recomenda: Considera uma dieta balanceada e ativadade f�sica \n");
}if (resultado >= 30 || resultado <= 34.9)
{
    printf("Classifica��o: Obesidade grau 1 \n");
    printf("Recomenda: Procure orienta��o de um profissional de sa�de \n");
if (resultado >= 35 || resultado <= 39.9)
{
    printf("Classifica��o: Obesidade grau 2 \n");
    printf("Recomenda: Consulte um m�dico para avalia��o e orienta��o \n");
}if (resultado >= 40)
{
    printf("Classifica��o: Obesidade grau 3 \n");
    printf("Recomenda: Busque assistencia m�dica imediatamente \n");
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