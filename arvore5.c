"5) Busca em Árvore Binária de Busca (BST)
Dada uma árvore binária de busca, implemente uma função que receba
um valor e retorne se ele está ou não presente na árvore."

// Funcao recursiva para buscar um valor na arvore binaria de busca
int buscarValor(struct No *raiz, int valor) {
    // Caso base 1: valor nao encontrado (chegou a um no nulo)
    if (raiz == NULL) {
        return 0; // Retorna 0 (falso)
    }

    // Caso base 2: valor encontrado
    if (raiz->data == valor) {
        return 1; // Retorna 1 (verdadeiro)
    }

    // Passo recursivo: decide para qual subarvore buscar
    if (valor < raiz->data) {
        return buscarValor(raiz->esquerda, valor);
    } else {
        return buscarValor(raiz->direita, valor);
    }
}

