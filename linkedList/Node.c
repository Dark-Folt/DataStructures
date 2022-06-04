#include "Node.h"

bool
node_empty (const Node_t *node)
{
    return (NULL == node);
}

Node_t *
node_create (int value)
{
    Node_t * node = (Node_t *) malloc(sizeof(Node_t));
    if (node_empty (node)) {
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
    if (node_empty (node)) {
        fprintf(stderr, "La node n'est pas alloué\n");
        return;
    }
    node->next = NULL;
    free (node);
    node = NULL;
}

void
node_display(const Node_t *node)
{
    if (node_empty (node)) {
        fprintf (stderr, "la node est vide. (NULL Pointer)\n");
        return;
    }
    printf ("value: %d\t@: %p\tnext: %p\n", node->value, node, node->next);
}
