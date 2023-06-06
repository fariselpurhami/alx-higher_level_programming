#include "lists.h"

/* definations */
#define MAX_FILENAME_LENGHT 256
#define MAX_TEXT_CONTENT_LENGHT 1024

/* prototype */
listint_t *insert_node(listint_t **head, int number);

/**
 * insert_node - INSERT NUMBERS IN STORED SINGLE LINKED LIST.
 * @head:IT'S A POINTERS TO POINTERS TO THE HEAD OF THE LIST.
 * @number:IT'S AN INSERTED THE NUMBER THAT WILL BE INSERTED.
 * Return: THE ADDRESS OF THE NEW NODE, OR NULL IF IT FAILED.
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    listint_t *current = *head;
    listint_t *prev = NULL;

    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = number;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    while (current != NULL && current->n < number)
    {
        prev = current;
        current = current->next;
    }

    if (prev == NULL)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        new_node->next = prev->next;
        prev->next = new_node;
    }

    return (new_node);
}
