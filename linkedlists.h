#ifndef __LINKEDLISTS_H__
#define __LINKEDLISTS_H__

typedef struct node {
    int val;
    struct node * next;
} node_n;

typedef struct list {
    struct node * head;
} list_n;

list_n createList();

void add_to_front(list_n * first, int val);

void add_to_end(list_n first, int val);

int pop(list_n);

int remove_by_index(list_n * first, int val);

void printList(list_n first);


#endif  