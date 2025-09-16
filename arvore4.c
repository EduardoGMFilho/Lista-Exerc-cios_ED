"4)Contagem de Nós e Folhas
a) Escreva uma função que conte o número total de nós da árvore.
b) Escreva outra função que conte quantos nós folha (sem filhos) existem."


// a) Funcao recursiva para contar o numero total de nos
int contarNos(struct No *raiz) {
    // Caso base: se a arvore e vazia, retorna 0
    if (raiz == NULL) {
        return 0;
    }

    // Retorna 1 (pelo no atual) + a contagem da esquerda + a contagem da direita
    return 1 + contarNos(raiz->esquerda) + contarNos(raiz->direita);
}

//---

// b) Funcao recursiva para contar o numero de nos folha
int contarFolhas(struct No *raiz) {
    // Caso base 1: se o no e nulo, nao ha folhas, retorna 0
    if (raiz == NULL) {
        return 0;
    }

    // Caso base 2: se e uma folha (nao tem filhos), retorna 1
    if (raiz->esquerda == NULL && raiz->direita == NULL) {
        return 1;
    }

    // Se nao e folha, soma a contagem das subarvores
    return contarFolhas(raiz->esquerda) + contarFolhas(raiz->direita);
}