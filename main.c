#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do nó
typedef struct Node {
  int value;
  struct Node *next;
} Node;

// Ponteiro inicial da lista
Node *head = NULL;

// função que adiciona um novo nó de forma dinâmica na lista
void addNode(int value) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->value = value;
  newNode->next = head;
  head = newNode;
}

void printList() {
  Node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->value);
    temp = temp->next;
  }
  printf("\n");
}

// a impressão deverá ser 100 50 20
int main() {
  addNode(20);
  addNode(50);
  addNode(100);
  printList();
  return 0;
}