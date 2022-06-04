#ifndef _LinkedList_H
#define _LinkedList_H
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Node.h"

typedef struct _LinkedList_int
{
    Node_t *head;
    unsigned int length;
}LinkedList_t;

/** * Protype des fonctions * */
unsigned int linkedList_length (const LinkedList_t*);
void linkedList_insert (LinkedList_t *, Node_t *node);
void linkedList_display (LinkedList_t *);
bool linkedList_empty (LinkedList_t *);
void linkedList_free (LinkedList_t *l);
LinkedList_t * linkedList_create ();


#endif