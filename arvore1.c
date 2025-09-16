"1)Construção de Árvore Binária
Implemente uma estrutura de dados para representar uma árvore binária.
Crie uma função para inserir novos nós na árvore."


#include <stdio.h>
#include <stdlib.h>

// 1. Estrutura para um nó da árvore
struct No {
    int data;
    struct No *esquerda;
    struct No *direita;
};

// 2. Função para criar um novo nó
struct No* criarNovoNo(int valor) {
    struct No *novoNo = (struct No*)malloc(sizeof(struct No));
    novoNo->data = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

// 3. Função recursiva para inserir um novo nó na árvore
struct No* inserirNo(struct No *raiz, int valor) {
    // Caso base: se a árvore está vazia, cria o primeiro nó
    if (raiz == NULL) {
        return criarNovoNo(valor);
    }

    // Passo recursivo: encontra o local de inserção
    if (valor < raiz->data) {
        // Insere na subárvore esquerda
        raiz->esquerda = inserirNo(raiz->esquerda, valor);
    } else {
        // Insere na subárvore direita (valores maiores ou iguais)
        raiz->direita = inserirNo(raiz->direita, valor);
    }

    // Retorna o ponteiro (inalterado) para a raiz original
    return raiz;
}

// Função para percorrer a árvore em ordem (para verificar a inserção)
void percorrerEmOrdem(struct No *raiz) {
    if (raiz != NULL) {
        percorrerEmOrdem(raiz->esquerda);
        printf("%d ", raiz->data);
        percorrerEmOrdem(raiz->direita);
    }
}

int main() {
    struct No *raiz = NULL;

    // Inserindo nós na árvore
    printf("Inserindo os seguintes valores: 50, 30, 70, 20, 40, 60, 80\n");
    raiz = inserirNo(raiz, 50);
    inserirNo(raiz, 30);
    inserirNo(raiz, 70);
    inserirNo(raiz, 20);
    inserirNo(raiz, 40);
    inserirNo(raiz, 60);
    inserirNo(raiz, 80);

    // Percorrendo a árvore para verificar se a inserção está correta
    printf("Arvore em ordem (valores ordenados): \n");
    percorrerEmOrdem(raiz);
    printf("\n");

    return 0;
}