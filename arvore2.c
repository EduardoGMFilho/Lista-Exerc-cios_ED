"2) Percursos em Árvore
Implemente funções recursivas que percorram a árvore em:
- Pré-ordem (Root, Left, Right)
- In-ordem (Left, Root, Right)
- Pós-ordem (Left, Right, Root)"


void percorrerPreOrdem(struct No *raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->data);        // 1. Visita a raiz
        percorrerPreOrdem(raiz->esquerda);  // 2. Percorre a subárvore esquerda
        percorrerPreOrdem(raiz->direita);   // 3. Percorre a subárvore direita
    }
}

void percorrerEmOrdem(struct No *raiz) {
    if (raiz != NULL) {
        percorrerEmOrdem(raiz->esquerda);   // 1. Percorre a subárvore esquerda
        printf("%d ", raiz->data);         // 2. Visita a raiz
        percorrerEmOrdem(raiz->direita);    // 3. Percorre a subárvore direita
    }
}

void percorrerPosOrdem(struct No *raiz) {
    if (raiz != NULL) {
        percorrerPosOrdem(raiz->esquerda);  // 1. Percorre a subárvore esquerda
        percorrerPosOrdem(raiz->direita);   // 2. Percorre a subárvore direita
        printf("%d ", raiz->data);         // 3. Visita a raiz
    }
}