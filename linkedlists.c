#include <stdio.h>
#include <stdlib.h>
#include "linkedlists.h"


list_n createList() {
    node_n * head = NULL;
    list_n first;
    head = malloc(sizeof(node_n));
    if (head == NULL) {
        printf("Nothing to show");
    }

    head->val = 1;
    head->next = NULL;
    first.head = head;
    return first;
}

void add_to_front(list_n * first, int val) {
    node_n * new_node;
    new_node = malloc(sizeof(node_n));

    new_node->val = val;
    new_node->next = first->head;
    first->head = new_node;
}

void add_to_end(list_n first, int val) {
    node_n * current = first.head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = malloc(sizeof(node_n));
    current->next->val = val;
    current->next->next = NULL;

}

int pop(list_n first) {

    int ret = -1;
    node_n * next_node = NULL;

    if(first.head == NULL) {
        return -1;
    }

    next_node = (first.head)->next;
    ret = (first.head)->val;
    free(first.head);
    first.head = next_node;

    return ret;
}

int remove_by_index(list_n *first, int val) {
    int i = 0, ret = -1;
    node_n * current = first->head;
    node_n * temp = NULL;

    if(val == 0) {
        return pop(*first);
    }

    for(i = 0; i < val - 1; i++) {
        if (current->next == NULL) {
            return -1;
        }
        current = current->next; 
    }

    if (current->next == NULL) {
        return -1;
    }

    temp = current->next;
    ret = temp->val;
    current->next = temp->next;
    free(temp);
}

void printList(list_n first) {
    node_n * current = first.head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

