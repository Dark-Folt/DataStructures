#ifndef _Node_H
#define _Node_H


typedef struct _Node_t
{
    int value;
    struct _Node_t *next;
}Node_t;

Node_t *node_create(int);

#endif