#include <stdio.h>
#include <stdlib.h>

#include "Node.h"
#include "LinkedList.h"




int main(void)
{
    LinkedList_t *list = 0;
    linkedList_length (list);
    printf ("long: %d\n", linkedList_length(list));
    return EXIT_SUCCESS;
}