#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float calcularImc(float peso, float altura) {
    return peso / (altura * altura);
}

void classificacao(float imc) {
    if (imc < 18.5)
        printf("Abaixo do peso");
    else if (imc < 25)
        printf("Peso normal");
    else if (imc < 30)
        printf("Sobrepeso");
    else if (imc < 35)
        printf("Obesidade grau 1");
    else if (imc < 35)
        printf("Obesidade grau 2");
    else
        printf("Obesidade grau 3");
}

char* recomendacao(float imc) {
    char resultado[200];
   
    if (imc < 18.5)
        strcpy(resultado, "Consulte um nutricionista para orienta��o.");
    else if (imc < 25)
        strcpy(resultado, "Mantenha h�bitos saud�veis.");
    else if (imc < 30)
        strcpy(resultado, "Considere uma dieta balanceada e atividade f�sica.");
    else if (imc < 35)
    strcpy(resultado, "Procure orienta��o de um profissional de sa�de.");
    else if (imc < 35)
        strcpy(resultado, "Consulte um m�dico para orienta��o.");
    else
        strcpy(resultado, "Busque assist�ncia m�dica imediatamente.");
       
    return resultado;
}

int main() {
    setlocale(LC_ALL, "");
    float imc, peso, altura;
   
    // Solicitando dados do usu�rio.
    printf("Digite seu peso: ");
    scanf("%f",&peso);
   
    printf("Digite sua altura: ");
    scanf("%f",&altura);
   
    // Calculando IMC.
    imc = calcularImc(peso, altura);
   
    // Exibindo os resultados.
    printf("\nIMC: %.2f \n", imc);
    classificacao(imc);
   
    printf("\nRecomenda��o: %s \n", recomendacao(imc));
   
    return 0;
}
