#include "LinkedList.h"

bool
linkedList_empty (LinkedList_t *l)
{
    return (NULL == l->head) && (0 == l->length);
}

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

    if (list->length == 1) {
        list->head->next = node;
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

    for ( ; tmp->next; tmp = tmp->next)
        ;

    tmp->next = node;
    list->length++;
}

void
linkedList_display (LinkedList_t *list)
{
    if (linkedList_empty (list)) {
        fprintf (stderr, "La liste est vide\n");
        return;
    }

    Node_t *tmp = list->head;
    for( ; tmp; tmp = tmp->next) {
        node_display (tmp);
    }
}

void
linkedList_free (LinkedList_t *list)
{
    if (NULL == list) {
        fprintf (stderr, "Liste vide\n");
        return;
    }

    Node_t *tmp, *node_d;

    node_d = tmp = list->head;
    printf ("-------Nettoyage de la liste--------\n");
    while (tmp && list->length > 0)
    {
        node_d = tmp;
        tmp = tmp->next;
        printf ("supression de: %d\t@: %p\tn: %p\n", node_d->value, node_d, node_d->next);
        node_free (node_d);
        list->length--;
    }
    list->head = NULL;
    printf ("-------FIN-------\n");

    printf ("taille: %d et tete: %p\n", list->length, list->head);
}

LinkedList_t * linkedList_create ();
