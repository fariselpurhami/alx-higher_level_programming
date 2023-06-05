#include "lists.h"

/* defination */
#define MAX_FILENAME_LENGHT 256
#define MAX_TEXT_CONTENT_LENGHT 1024

/* prototype */
int check_cycle(listint_t *list);

/**
 * check_cycle - LET'S CHECK IF THE A SINGLE LIST HAS A CYCLE ON IT.
 * @list: IT'S A POINTERS TO THE HEADS OF THE PROGRAMS OF THE LISTS.
 * Return: 0 IF THERE IS NO CYCLE, 1 IF THERE IS A CYCLE IN PRGORAM.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (1);
		}
	}

	return (0);
}
