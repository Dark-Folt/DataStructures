#include <stdio.h>
#include <stdlib.h>

#include "Node.h"
#include "LinkedList.h"

int main(void)
{
    // Node_t *node = node_create(23);
    LinkedList_t l = {.head = NULL, .length = 0};
    Node_t * node_1 = node_create(23);
    Node_t * node_2 = node_create(24);
    Node_t * node_3 = node_create(25);
    Node_t * node_4 = node_create(26);

    linkedList_insert (&l, node_1);
    linkedList_insert (&l, node_2);
    linkedList_insert (&l, node_3);
    linkedList_insert (&l, node_4);
    linkedList_display (&l);

    linkedList_free (&l);
    linkedList_display (&l);

    return EXIT_SUCCESS;
}
