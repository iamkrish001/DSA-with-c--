// Linked list implementation in C

#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node {
  int value;
  struct node *next;
};

// print the linked list value
void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->value);
    p = p->next;
  }
}

void insert(struct node *newnode ){
newnode->value = 6 ; 
newnode = malloc(sizeof(struct node));

}
int main() {
  // Initialize nodes
  struct node *head;
  struct node *newnode;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;

  // Allocate memory
  newnode = malloc(sizeof(struct node));
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  // Assign value values
newnode->value = 6 ; 
  one->value = 4;
  two->value = 2;
  three->value = 3;

  // Connect nodes
  newnode->next = one ; 
  one->next = two;
  two->next = three;
  three->next = NULL;

  // printing node-value
  head = one;
  insert(head); 
  printLinkedlist(head);
}

