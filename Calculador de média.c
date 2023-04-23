#include <stdio.h>
int main()
{
    //declaração de variáveis
    float n1, n2;//notas dos alunos
    float media;//media aritimética das notas
    
    //mensagem
    printf("Bem vindo ao programa!\n\n");
    
    //entrada de dados
    printf("insira a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("\ninsira a segunda nota do aluno: ");
    scanf("%f", &n2);
    
    //processamento
    media = (n1 + n2)/2;
    
    //saída de dados
    if(media >= 6) {
        printf("Aluno aprovado!");
        printf("\nA média do aluno é %.2f", media);
    }
    else {
        printf("Aluno reprovado!");
        printf("\nA média do aluno é %.2f", media);
    }
        
}
