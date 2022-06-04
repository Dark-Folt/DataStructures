#ifndef _LinkedList_H
#define _LinkedList_H

#include "Node.h"

typedef struct _LinkedList_int
{
    Node_t *head;
    unsigned int length;
}LinkedList_t;

/** * Protype des fonctions * */
unsigned int linkedList_length (const LinkedList_t*);
void linkedList_insert (LinkedList_t *, Node_t *node);
#endif