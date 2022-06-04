#include <stdlib.h>
#include <stdio.h>

#include "Node.h"

Node_t *
node_create (int value)
{
    Node_t * node = (Node_t *) malloc(sizeof(Node_t));
    if (NULL == node) {
        fprintf (stderr, "Erreur malloc de la node\n");
        exit (EXIT_FAILURE);
    }
    node->next = NULL;
    node->value = value;

    return node;
}

void
node_free (Node_t *node)
{
    if (NULL == node) {
        fprintf(stderr, "La node n'est pas alloué\n");
        return;
    }
    free (node);
    node = NULL;
}