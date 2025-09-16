"7) Verificar se é BST
Implemente uma função que, dada uma árvore binária qualquer,
determine se ela satisfaz as propriedades de uma árvore binária de busca"


// Funcao de ajuda para a verificacao da BST
int isBSTUtil(struct No *raiz, int min, int max) {
    // Caso base: se a subarvore esta vazia, ela e valida
    if (raiz == NULL) {
        return 1;
    }

    // Verifica se o valor do no esta fora do intervalo valido
    if (raiz->data < min || raiz->data > max) {
        return 0;
    }

    // Chama recursivamente para as subarvores com os novos limites
    return isBSTUtil(raiz->esquerda, min, raiz->data - 1) &&
           isBSTUtil(raiz->direita, raiz->data + 1, max);
}

// Funcao principal para verificar se e uma BST
int verificarSeEhBST(struct No *raiz) {
    return isBSTUtil(raiz, INT_MIN, INT_MAX);
}