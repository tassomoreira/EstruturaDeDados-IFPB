#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"
#include "operacoes.h"

int main()
{
    printf("Matriz 1: \n");
    Matriz matriz1 = matrizCriar(3, 2);
    matrizAdicionaElemento(matriz1, 1, 1, 1);
    matrizAdicionaElemento(matriz1, 2, 1, 2);
    matrizAdicionaElemento(matriz1, 3, 2, 1);
    matrizAdicionaElemento(matriz1, 4, 2, 2);
    matrizAdicionaElemento(matriz1, 5, 3, 1);
    matrizAdicionaElemento(matriz1, 6, 3, 2);

    matrizImprimir(matriz1);
    printf("\n");
    
    printf("Matriz 2: \n");
    Matriz matriz2 = matrizCriar(2, 3);
    matrizAdicionaElemento(matriz2, 1, 1, 1);
    matrizAdicionaElemento(matriz2, 2, 1, 2);
    matrizAdicionaElemento(matriz2, 3, 1, 3);
    matrizAdicionaElemento(matriz2, 4, 2, 1);
    matrizAdicionaElemento(matriz2, 5, 2, 2);
    matrizAdicionaElemento(matriz2, 6, 2, 3);

    matrizImprimir(matriz2);
    printf("\n");
    
    printf("Produto Matriz 1 * Matriz 2:\n");
    Matriz produtoMatriz = matrizProduto(matriz1, matriz2);
    matrizImprimir(produtoMatriz);
    printf("--------------------------------------------------------------------------------------------------------------\n");

    printf("Matriz 3: \n");
    Matriz matriz3 = matrizCriar(2, 4);
    matrizAdicionaElemento(matriz3, 1, 1, 1);
    matrizAdicionaElemento(matriz3, 2, 1, 2);
    matrizAdicionaElemento(matriz3, 3, 1, 3);
    matrizAdicionaElemento(matriz3, 4, 1, 4);
    matrizAdicionaElemento(matriz3, 5, 2, 1);
    matrizAdicionaElemento(matriz3, 6, 2, 2);
    matrizAdicionaElemento(matriz3, 7, 2, 3);
    matrizAdicionaElemento(matriz3, 8, 2, 4);

    matrizImprimir(matriz3);
    printf("\n");
    
    printf("Matriz 4: \n");
    Matriz matriz4 = matrizCriar(2, 4);
    matrizAdicionaElemento(matriz4, 1, 1, 1);
    matrizAdicionaElemento(matriz4, 2, 1, 2);
    matrizAdicionaElemento(matriz4, 3, 1, 3);
    matrizAdicionaElemento(matriz4, 4, 1, 4);
    matrizAdicionaElemento(matriz4, 5, 2, 1);
    matrizAdicionaElemento(matriz4, 6, 2, 2);
    matrizAdicionaElemento(matriz4, 7, 2, 3);
    matrizAdicionaElemento(matriz4, 8, 2, 4);

    matrizImprimir(matriz4);
    printf("\n");
    
    printf("Matriz transposta da soma das matrizes 3 e 4: \n");
    matrizTranspostaSoma(matriz3,matriz4);
    
    printf("--------------------------------------------------------------------------------------------------------------\n");
    
    printf("Matriz 5: \n");
    Matriz matriz5 = matrizCriar(3, 3);
    matrizZerar(matriz5);
    matrizAdicionaElemento(matriz5, 1, 1, 1);
    matrizAdicionaElemento(matriz5, 1, 2, 2);
    matrizAdicionaElemento(matriz5, 1, 3, 3);
    matrizImprimir(matriz5);
    if (matrizIdentidade(matriz5)){
        printf("A matriz 5 eh uma matriz identidade!\n");
    }else{
        printf("A matriz 5 nao eh uma matriz identidade\n");
    }
    printf("--------------------------------------------------------------------------------------------------------------\n");
    
    printf("Matriz 6: \n");
    Matriz matriz6 = matrizCriar(2, 2);
    matrizAdicionaElemento(matriz6, 2, 1, 1);
    matrizAdicionaElemento(matriz6, -5, 1, 2);
    matrizAdicionaElemento(matriz6, -1, 2, 1);
    matrizAdicionaElemento(matriz6, 3, 2, 2);
    matrizImprimir(matriz6);
    printf("\n");
    
    printf("Matriz 7: \n");
    Matriz matriz7 = matrizCriar(2, 2);
    matrizAdicionaElemento(matriz7, 3, 1, 1);
    matrizAdicionaElemento(matriz7, 5, 1, 2);
    matrizAdicionaElemento(matriz7, 1, 2, 1);
    matrizAdicionaElemento(matriz7, 2, 2, 2);
    matrizImprimir(matriz7);
    printf("\n");

    if (matrizInversa(matriz6, matriz7)){
        printf("A matriz 7 eh inversa da matriz 6 porque o produto dessas matrizes resultou numa matriz identidade.\n");
    }else{
        printf("A matriz 7 nao eh inversa da matriz 6 porque o produto dessas matrizes nao resultou numa matriz identidade.\n");
    }

    free(matriz1.vetor);
    free(matriz2.vetor);
    free(matriz3.vetor);
    free(matriz4.vetor);
    free(matriz5.vetor);
    free(matriz6.vetor);
    free(matriz7.vetor);
    printf("Fim do programa \n");
    return 1;
}
