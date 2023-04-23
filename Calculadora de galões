#include <stdio.h>
#include <math.h>     

int main() {

    //variáveis
    float velocidade_media, galoes, litros_por_hora, tempo, km_percorridos, lt_necessarios;
    float quantidade_galoes;

    //mensagem
    printf("Seja bem vindo ao programa: \n\n");

   

    //entrada de dados
    printf("insira o tempo gasto na viagem, em horas: ");
    scanf("%f", &tempo);
    printf("\ninsira a velociade média do veiculo em quilômetros por hora: ");
    scanf("%f", &velocidade_media);

    //processamento
    galoes = 5;
    litros_por_hora = 12;
    km_percorridos = tempo * velocidade_media;//quilômetros percorridos 
    lt_necessarios = km_percorridos / litros_por_hora;//litros necessários
    quantidade_galoes = lt_necessarios / galoes;//quantidade de galões necessários

    //saída de dados
    printf("\nA quantidade de galões necessários para concluir esta viagem é de: %g ", quantidade_galoes);
}
