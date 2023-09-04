#include "linkedlists.h"
#include <stdio.h>


int main(void) {

    list_n list = createList();
    printf("First: ");
    printList(list);
    add_to_end(list, 2);
    add_to_front(&list, 4);
    printf("\nSecond: ");
    printList(list);
    remove_by_index(&list, 2);
    printf("\nThird: ");
    printList(list);
    return 0;
} 