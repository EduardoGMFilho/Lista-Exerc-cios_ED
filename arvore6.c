"6)Menor e Maior Elemento em BST
Escreva funções para encontrar o menor e o maior valor de uma
árvore binária de busca."



int encontrarMenorRecursivo(struct No *raiz) {
    // Se a árvore estiver vazia, retorna um valor de erro
    if (raiz == NULL) {
        printf("Erro: A arvore esta vazia.\n");
        exit(1);
    }
    // Caso base: se nao houver mais nos a esquerda, este e o menor
    if (raiz->esquerda == NULL) {
        return raiz->data;
    }
    // Passo recursivo: continua a busca na subarvore esquerda
    return encontrarMenorRecursivo(raiz->esquerda);
}

int encontrarMaiorRecursivo(struct No *raiz) {
    if (raiz == NULL) {
        printf("Erro: A arvore esta vazia.\n");
        exit(1);
    }
    // Caso base: se nao houver mais nos a direita, este e o maior
    if (raiz->direita == NULL) {
        return raiz->data;
    }
    // Passo recursivo: continua a busca na subarvore direita
    return encontrarMaiorRecursivo(raiz->direita);
}