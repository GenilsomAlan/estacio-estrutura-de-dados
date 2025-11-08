#include<stdio.h>
#include<string.h>

int main(){
    //declaração das variaveis para definir quantos territórios o jogo terá.
    int i, n;
    //Criação da estrutura Território contendo os atributos nome, cor e quantidade de tropas.
    typedef struct {
        char nome[30];
        char cor[15];
        int contingent;
    }territorio;

    printf("Olá! Este é o jogo War! \n");
    printf("Digite quantos territórios o jogo terá: ");
    scanf("%d",&n);

    territorio listaDeTerritorio[n];

    //loop para obter dados dos territórios.
    for(i = 0; i < n; i++){
        printf("\nDigite o nome do %dª território: ", i + 1);
        scanf("%29s",listaDeTerritorio[i].nome);

        printf("\nDigite a cor do %dª território: ", i + 1);
        scanf("%14s",listaDeTerritorio[i].cor);

        printf("\nDigite a quantidade de tropas do %dª território: ", i + 1);
        scanf("%d",&listaDeTerritorio[i].contingent);
    }

    printf("\n--- TERRITORIOS CADASTRADOS ---\n");

    //loop para mostrar os dados obtidos.
    for(i = 0; i < n; i++){
        printf("*** Nome: %s \n*** Cor: %s \n*** Tropas: %d \n", listaDeTerritorio[i].nome, listaDeTerritorio[i].cor, listaDeTerritorio[i].contingent);
    }

    return 0;
}