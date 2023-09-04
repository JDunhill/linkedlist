#ifndef __LINKEDLISTS_H__
#define __LINKEDLISTS_H__

typedef struct node {
    int val;
    struct node * next;
} node_n;

typedef struct list {
    struct node * head;
    struct node * end;
} list_n;

node_n * createList();

void add_to_front(node_n ** head, int val);

void add_to_end(node_n * head, int val);

int pop(node_n ** head);

int remove_by_index(node_n ** head, int val);

void printList(node_n * head);


#endif  