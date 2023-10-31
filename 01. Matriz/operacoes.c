#include <stdlib.h>
#include "matriz.h"
#include "operacoes.h"

Matriz matrizProduto(Matriz matriz1, Matriz matriz2)
{
    if (matriz1.colunas != matriz2.linhas)
    {
        perror("Erro: As dimensoes das matrizes nao sao compativeis para multiplicacao\n");
        exit(0);
    }
    Matriz temp = matrizCriar(matriz1.linhas, matriz2.colunas);
    for (int i = 1; i <= matriz1.linhas; i++)
    {
        for (int j = 1; j <= matriz2.colunas; j++)
        {
            int acumulador = 0;
            for (int k = 1; k <= matriz1.colunas; k++)
            {
                acumulador += matrizBuscaElemento(matriz1, i, k) * matrizBuscaElemento(matriz2, k, j);
            }
            matrizAdicionaElemento(temp, acumulador, i, j);
        }
    }
    return temp;
} 

Matriz matrizSomar(Matriz matriz1, Matriz matriz2){
    if (matriz1.tamanho != matriz2.tamanho)
    {
        perror("Se as dimensões de duas matrizes não são iguais, a soma não é definida. By matematica himself.");
        exit(0);
    }
    Matriz temp = matriz1;
    for (int l = 1; l <= matriz1.linhas; l++)
    {
        for (int c = 1; c <= matriz1.colunas; c++)
        {
            int resultSoma = matrizBuscaElemento(matriz1, l, c) + matrizBuscaElemento(matriz2, l, c);
            matrizAdicionaElemento(temp, resultSoma, l, c);
        }
    }
    return temp;
} 

Matriz matrizTransposta(Matriz matriz){
    Matriz temp = matrizCriar(matriz.colunas, matriz.linhas);
    for (int c = 1; c <= matriz.colunas; c++)
    {
        for (int l = 1; l <= matriz.linhas; l++)
        {
            int elemento = matrizBuscaElemento(matriz, l, c);
            matrizAdicionaElemento(temp, elemento, c, l);
        }
    }
    return temp;
} 

void matrizTranspostaSoma(Matriz matriz1, Matriz matriz2){
    Matriz temp = matrizTransposta( matrizSomar(matriz1,matriz2) );
    matrizImprimir(temp);
}

int matrizIdentidade(Matriz matriz){
    if (matriz.colunas != matriz.linhas)
        return 0;
    for (int i = 1; i <= matriz.linhas; i++)
    {
        for (int c = 1; c <= matriz.colunas; c++)
        {
            if (i == c && matrizBuscaElemento(matriz, i, c) != 1)
                return 0;
            if (i != c && matrizBuscaElemento(matriz, i, c) != 0)
                return 0;
        }
    }
    return 1;
} 

int matrizInversa(Matriz matrizA, Matriz matrizB){
    if (matrizA.linhas != matrizA.colunas)
        return 0;
    Matriz produtoMatriz = matrizProduto(matrizA, matrizB);
    if (matrizIdentidade(produtoMatriz))
        return 1;
    return 0;
}