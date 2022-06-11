#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(int argc, char const *argv[])
{
    // Dado um inteiro positivo com idade, crie um programa que diga se o voto é facultativo ou obrigatório 
    
    setlocale(LC_ALL, "Portuguese");
    
    int idade;

    printf("Insira a sua idade: ");
    scanf("%d", &idade);

    if(idade < 16){
        printf("Você tem voto inválido");
    }else if(idade >= 16 & idade < 18){
        printf("Você tem voto facultativo");
    }else if(idade >= 18&& idade <= 70){
        printf("Você tem o voto obrigatório");
    }else{
        printf("Você tem o voto facultativo");
    }


    return 0;
}
