#ifndef _Node_H
#define _Node_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct _Node_t
{
    int value;
    struct _Node_t *next;
}Node_t;

Node_t *node_create(int);
void node_free(Node_t *);
void node_display(const Node_t *);
bool node_empty (const Node_t *);

#endif
