#include "lists.h"

/* definations */
#define MAX_FILENAME_LENGHT 256
#define MAX_TEXT_CONTENT_LENGHT 1024

/* prototype */
int is_palindrome(listint_t **head);

/**
 * is_palindrome - LET'S WRITES A FUNCTIONS THATS.
 * CHECKS IF A SINGLY LINKED LIST IS A PALINDROME.
 * @head: IT'S A POINTERS TO THE HEAD OF THE LIST.
 * Return: 0 IF ITS IS NOT A PALINDROME , 1 IF IT.
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *prev = NULL, *next = NULL;

	while (fast && fast->next)
	{
		fast = fast->next->next;
		prev = slow;
		slow = slow->next;
	}

	if (fast)
	{
		slow = slow->next;
	}

	while (slow)
	{
		next = slow->next;
		slow->next = prev;
		prev = slow;
		slow = next;
	}

	fast = *head;
	while (prev)
	{
		if (fast->n != prev->n)
		{
			return (0);
		}

		fast = fast->next;
		prev = prev->next;
	}

	return (1);
}
