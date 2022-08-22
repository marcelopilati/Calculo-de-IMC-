#include <stdio.h>
void main(){

    float peso, altura, imc;

    printf("Calculo de IMC\n\n");

    printf("Insira o seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Insira a sua altura (em m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %f\n\n", imc);

    if(imc > 0 && imc < 17){
        printf("Muito abaixo do peso\n");
    }
    else if(imc >= 17 && imc < 18.5){
        printf("Abaixo do Peso\n");
    }
    else if(imc >= 18.5 && imc < 25){
        printf("Peso Normal");
    }
    else if(imc >= 25 && imc < 30){
        printf("Acima do Peso");
    }
    else if(imc >= 30 && imc < 35){
        printf("Obesidade Grau 1");
    }
    else if(imc >= 35 && imc < 41){
        printf("Obesidade Grau 2");
    }
    else
        printf("Obesidade Grau 3");
}
