#include <stdio.h>

int main()
{
    // declaração de variáveis
    float salario;//sálario do funcionário
    char cargo;//tipo do cargo do funcionário
    
    // mensagem
    printf("Calculadora de bônus\n\n");//mensagem inicial do programa
    
    // entrada de dados
    printf("Informe o salário do funcionário: ");
    scanf("%f", &salario);
    printf("Agora insira o tipo de cargo do funcionário, A ou B: ");
    scanf(" %c", &cargo); 
    
    // saída de dados
    if(cargo == 'A') {
        if(salario <= 1000) {
            printf("\nO valor do bônus é de 500 reais\n");
        }
        else if(salario <= 2500) { 
            printf("\nO valor do bônus é de 250 reais\n");
        }
        else if(salario <= 5000) { 
            printf("\nO valor do bônus é de 100 reais\n");
        }
        else {
            printf("\nO valor do bônus é de 50 reais\n");
        }
    }
    else if(cargo == 'B') { 
        if(salario <= 2000) {
            printf("\nO valor do bônus é de 500 reais\n");
        }
        else if(salario <= 5000) { 
            printf("\nO valor do bônus é de 200 reais\n");
        }
        else { 
            printf("\nO valor do bônus é de 100 reais\n");
        }
    }
    else {
        printf("Tipo de cargo inválido\n");
    }
}
