/*
 * =====================================================================================
 *
 *       Filename:  doubleLinkList.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/08/2020 17:46:46
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* previous;
};

void insert_at_beginning(struct Node **pheadNode, int value);
void insert_at_end(struct Node **pheadNode, int value);

void print_list(struct Node *headNode);
void print_list_backwards(struct Node *headNode);

void reverse_list(struct Node **headNode);

void free_list(struct Node *headNode);

int main(void) {

    struct Node *head = NULL;

    printf("Insert a node at the beginning of the list. \n");

    insert_at_beginning(&head, 5);
    print_list(head);

    printf("Insert a node at the beginning of the list and then print the list backward \n");

    insert_at_beginning(&head, 10);
    print_list_backwards(head);

    printf("Insert a node at the end, and then print the list forwards.\n"); 
    insert_at_end(&head, 15);

    print_list(head);

    printf("reverse List\n");

    reverse_list(&head);

    print_list(head);

    free_list(head);

    return 0; 

}

void insert_at_beginning(struct Node **pheadNode, int value) {

    struct Node *currentNode;

    if (NULL == pheadNode)
    {
        return;
    }

    currentNode = malloc(sizeof *currentNode);

    currentNode->data = value;
    currentNode->previous = NULL;

    if (*pheadNode == NULL) { /*  The list is empty */
        currentNode->next = NULL;
        *pheadNode = currentNode;
        return;
    }

    currentNode->next = *pheadNode;
    (*pheadNode)->previous = currentNode;
    *pheadNode = currentNode;

}

void insert_at_end(struct Node **pheadNode, int value) {


    if (NULL == *pheadNode) {
        return;
    }

    struct Node *i, *currentNode;

    currentNode = malloc(sizeof *currentNode);

    currentNode->data = value;
    currentNode->next = NULL;
    currentNode->previous = NULL;

    if (*pheadNode == NULL) {
        *pheadNode = currentNode;
        return;
    }

    i = *pheadNode;

    while (i->next != NULL) {
        i = i->next;
    }

    i->next = currentNode;
    currentNode->previous = i;
}

void print_list(struct Node *headNode) {

    struct Node *i;

    printf("Printing list : ");

    for (i=headNode; i != NULL; i = i->next) {
        printf(" %d ", i->data);
    }

    printf("\n");
}

void print_list_backwards(struct Node *headNode){

    if (NULL == headNode) {
        return;
    }

    struct Node *i;

    i = headNode;

    while (i->next != NULL) {
        i = i->next;
    }

    printf("Printing in reverse: ");

    while (i != NULL) {
        printf(" %d ", i->data);
        i = i->previous;
    }

    printf("\n");


}


void free_list(struct Node *headNode) {

    while (headNode != NULL) {
        struct Node *next = headNode->next;
        free(headNode);
        headNode = next;
    }

}

void reverse_list(struct Node **headNode) {

    if (NULL == *headNode) {
        return;
    }

    struct Node *i = *headNode;
    struct Node *nextNode=NULL;
    struct Node *previousNode = NULL;

    while (i != NULL) {
        nextNode = i->next;
        i->next = previousNode;
        previousNode = i;
        i = nextNode;
    }

    *headNode = previousNode;
}
