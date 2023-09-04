#include "linkedlists.h"


int main(void) {

    node_n * head = createList();
    printList(head);
    add_to_end(head, 2);
    add_to_front(&head, 4);
    remove_by_index(&head, 3);
    printList(head);
    return 0;
} 