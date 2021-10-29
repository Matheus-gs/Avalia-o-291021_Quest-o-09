/*
  Questão 09 - Elaborar um programa que leia os salários de três funcionários de uma firma. Isto feito, o programa deve calcular e imprimir: a) O maior salário da firma. b) O menor salário da firma. c) A média dos salários. 
*/
#include <stdio.h>

int main(void) {
  // START
  float salario_um, salario_dois, salario_tres, media_salarios;

  printf("// ***** Calculando Salários ***** //\n");

  printf("Informe o primeiro salário...\n");
  scanf("%f", &salario_um);

  printf("Informe o segundo salário...\n");
  scanf("%f", &salario_dois);

  printf("Informe o terceiro salário...\n");
  scanf("%f", &salario_tres);

// Verificando o maior
  if(salario_um > salario_dois && salario_um > salario_tres){

    printf("\n R$%.2f é o maior salário",salario_um);

    // Verificando o menor
    if(salario_dois > salario_tres){
      printf("\n R$%.2f é o menor salário",salario_tres);
    } else{
      printf("\n R$%.2f é o menor salário",salario_dois);
    }

// Verificando o maior
  }else if(salario_dois > salario_um && salario_dois > salario_tres){

    printf("\n R$%.2f é o maior salário",salario_dois);

    // Verificando o menor
    if(salario_um > salario_tres){
      printf("\n R$%.2f é o menor salário",salario_tres);
    } else{
      printf("\n R$%.2f é o menor salário",salario_um);
    }

// Verificando o maior
  } else if(salario_tres > salario_um && salario_tres > salario_dois){

    printf("\n R$%.2f é o maior salário",salario_dois);

    // Verificando o menor
    if(salario_um > salario_dois){
      printf("\n R$%.2f é o menor salário",salario_dois);
    } else{
      printf("\n R$%.2f é o menor salário",salario_um);
    }
  }

// Calculando a média salarial
  media_salarios = (salario_um+salario_dois+salario_tres)/3;

  printf("\n a média dos salários é R$%.2f", media_salarios);

  // END
  return 0;
}