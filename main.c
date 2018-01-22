#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, resultado;
    char operador;
    printf("Bem-vindo a Calculadora FacilitaVida.com \n");
    // Numero 1
    printf("Digite um Numero: ");
    scanf("%i",&num1);
    setbuf(stdin,NULL);
    // Operador
    printf("Digite o operador (+ - * / ):");
    scanf("%c",&operador);
    setbuf(stdin,NULL);
    // Numero dois
    printf("Digite o Segundo Numero: ");
    scanf("%i",&num2);
    setbuf(stdin,NULL);
    // if condição
    if(operador == '+'){

        resultado = num1 + num2;

    }else if(operador == '-'){

        resultado = num1 - num2;

    }else if(operador == '*'){

        resultado = num1 * num2;

    }else if(operador == '/'){

        resultado = num1 / num2;

    }else{
        printf("Operador Invalido");
    }
    printf("O resultado dos valores e: %d ", resultado);
    getch();
}
