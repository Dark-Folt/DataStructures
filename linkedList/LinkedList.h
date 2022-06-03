#ifndef _LinkedList_H
#define _LinkedList_H

#include "Node.h"

struct LinkedList_int
{
    struct Node *head;
    unsigned int length;
};

/** * Protype des fonctions * */
unsigned int linkedList_length(const struct LinkedList_int *);
#endif