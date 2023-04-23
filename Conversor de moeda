//conversão de moeda comercial
#include <stdio.h>

int main()
{
    //declaração de variáveis
    int moeda;
    float v1, cotacao;
    float v2, v3;
    
    //mensagem
    printf("Convesor de moeda\n\n");
    
    //entrada de dados
    printf("insira o valor que para ser convertido: ");
    scanf("%f", &v1);
    printf("\nDigite 1 para converter de dólar para real \n");
    printf("Digite 2 para converter de real para dólar \n");
    printf("Opção: ");
    scanf("%d", &moeda);
    
    //saída de dados
    if(moeda == 1) {
        printf("\nAgora insira a cotação atual do dolar: ");
        scanf("%f", &cotacao);
        v3 = v1 / cotacao;//transformação de real para dólar
        printf("O valor inserido anteriormente era de %.2f reais, e foi convertido em %.2f dólares.", v1, v3);
    }
    else 
        if(moeda == 2) {
            printf("\nAgora insira a cotação atual do dolar: ");
            scanf("%f", &cotacao);
            v2 = v1 * cotacao;//transformação de dolár para real
            printf("O valor inserido anteriormente era de %.2f dólares, e foi convertido em %.2f reais.", v1, v2);
        }    
        else {
            printf("\nUm dos valores inseridos não está de acordo com as instruções do programa.");
}
}
