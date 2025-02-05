#include <stdio.h>


int main() {
    char nome_da_cidade[20], codigo_da_cidade[4];
    float populacao_da_cidade, pib_da_cidade, area_da_cidade;
    int numero_de_pontos_turisticos;

    

    printf("Digite o Nome da cidade: ");
    fgets(nome_da_cidade, sizeof nome_da_cidade, stdin);

    
    printf("Digite o Código da Cidade: ");
    fgets(codigo_da_cidade, sizeof codigo_da_cidade, stdin);

    printf("Digite a População da Cidade: ");
    scanf(" %f\n", &populacao_da_cidade);

    printf("Digite o Pib da Cidade: ");
    scanf(" %f\n", &pib_da_cidade);

    printf("Digite a Area da Cidade: ");
    scanf(" %f\n", &area_da_cidade);
    
    printf("Digite o Número de Pontos Turisticos: ");
    scanf(" %d\n",&numero_de_pontos_turisticos);

    

    printf("Carta cadastrada com sucesso!\n");
    printf("Cidade: %s. \n", nome_da_cidade);
    printf("População: %.2f.\n", populacao_da_cidade);
    printf("Pib: %.2f.\n", pib_da_cidade);
    printf("Area: %.2f.\n",area_da_cidade);
    printf("Pontos Turisticos: %d\n", numero_de_pontos_turisticos);
    printf("Código da Cidade: %s.\n",codigo_da_cidade); 
    return 0;
}
