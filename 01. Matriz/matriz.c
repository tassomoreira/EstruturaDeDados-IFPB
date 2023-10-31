#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

Matriz matrizCriar(int linhas, int colunas){
    Matriz novaMatriz;
    novaMatriz.linhas = linhas;
    novaMatriz.colunas = colunas;
    novaMatriz.tamanho = linhas * colunas;
    novaMatriz.vetor = (int *)malloc(linhas * colunas * sizeof(int));
    return novaMatriz;
}

void matrizAdicionaElemento(Matriz matriz, int elemento, int linha, int coluna) {
     matriz.vetor[(linha - 1) * matriz.colunas + (coluna - 1)] = elemento; 
}

int matrizBuscaElemento(Matriz matriz, int linha, int coluna) { 
    return matriz.vetor[(linha - 1) * matriz.colunas + (coluna - 1)]; 
} 

void matrizZerar(Matriz matriz)
{
    for (int l = 1; l <= matriz.linhas; l++)
    {
        for (int c = 1; c <= matriz.colunas; c++)
        {
            matrizAdicionaElemento(matriz, 0, l, c);
        }
    }
} 

void matrizImprimir(Matriz matriz)
{
    for (int l = 1; l <= matriz.linhas; l++)
    {
        for (int c = 1; c <= matriz.colunas; c++)
        {
            printf("%d ", matrizBuscaElemento(matriz, l, c));
        }
        printf("\n");
    }
} 