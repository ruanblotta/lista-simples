#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Livros {
    char *livro;
    struct Livros *next;
} Livros;

Livros *head = NULL;

void addLivros(char *livro) {
    Livros *newLivro = (Livros *)malloc(sizeof(Livros));
    newLivro->livro = strdup(livro);
    newLivro->next = head;
    head = newLivro;
}

void printLivros() {
    Livros *temp = head;
    while (temp != NULL) {
        printf("%s ", temp->livro);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    addLivros("Livro A");
    addLivros("Livro B");
    addLivros("Livro C");
    addLivros("Livro D");
    addLivros("Livro E");
    printLivros();

    return 0;
}