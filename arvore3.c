"3) Altura da Árvore
Crie uma função recursiva que calcule a altura de uma árvore binária
(quantidade máxima de níveis da raiz até uma folha)."


#include <stdio.h>
#include <stdlib.h>



//---

// Função recursiva para calcular a altura da árvore
int alturaArvore(struct No *raiz) {
    // Caso base: se a arvore e vazia, a altura e -1
    if (raiz == NULL) {
        return -1;
    }

    // Calculo da altura da subarvore esquerda
    int alturaEsquerda = alturaArvore(raiz->esquerda);
    // Calculo da altura da subarvore direita
    int alturaDireita = alturaArvore(raiz->direita);

    // Retorna 1 + a maior altura entre as duas subarvores
    if (alturaEsquerda > alturaDireita) {
        return 1 + alturaEsquerda;
    } else {
        return 1 + alturaDireita;
    }
}

//---

int main() {
    struct No *raiz = NULL;

    raiz = inserirNo(raiz, 50);
    inserirNo(raiz, 30);
    inserirNo(raiz, 70);
    inserirNo(raiz, 20);
    inserirNo(raiz, 40);
    inserirNo(raiz, 80);
    inserirNo(raiz, 10);

    // Calcula e imprime a altura da arvore
    int altura = alturaArvore(raiz);
    printf("A altura da arvore e: %d\n", altura);

    return 0;
}
