#include <stdio.h>
#include <stdlib.h>
#include "linkedlists.h"


node_n* createList() {
    node_n * head = NULL;
    head = malloc(sizeof(node_n));
    if (head == NULL) {
        printf("Nothing to show");
    }

    head->val = 1;
    head->next = NULL;
    return head;
}

void add_to_front(node_n ** head, int val) {
    node_n * new_node;
    new_node = malloc(sizeof(node_n));

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

void add_to_end(node_n * head, int val) {
    node_n * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = malloc(sizeof(node_n));
    current->next->val = val;
    current->next->next = NULL;

}

int pop(node_n ** head) {

    int ret = -1;
    node_n * next_node = NULL;

    if(*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    ret = (*head)->val;
    free(*head);
    *head = next_node;

    return ret;
}

int remove_by_index(node_n ** head, int val) {
    int i = 0, ret = -1;
    node_n * current = *head;
    node_n * temp = NULL;

    if(val == 0) {
        return pop(head);
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

void printList(node_n * head) {
    node_n * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

