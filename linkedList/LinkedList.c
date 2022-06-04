#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "LinkedList.h"

unsigned int
linkedList_length(const LinkedList_t* list)
{
    if (!list) {
        fprintf (stderr, "Erreur cette liste n'est pas allouée\n");
        exit(EXIT_FAILURE);
    }
    return list->length;
}

void
linkedList_insert (LinkedList_t *list, Node_t *node)
{
    if (NULL == list) {
        fprintf (stderr, "La liste n'est pas crée.\n");
        exit(EXIT_FAILURE);
    }

    if (NULL == node) {
        fprintf (stderr, "Cette élement n'existe pas. \n");
        exit(EXIT_FAILURE);
    }

    // insertion de l'element
    if (list->length == 0) {
        list->head = node;
        list->length ++;
        return;
    }

    /**
     * On parcour la liste 
     * si le suivant est nulle
     * ce la veut die qu'on n'entre pas dans le while
     * on ajoute ensuite le nouvel element 
     */
    Node_t *tmp = list->head;

    for ( ; tmp->next; tmp = tmp->next);
    tmp->next = node;
    list->length++;
}