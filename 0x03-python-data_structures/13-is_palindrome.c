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
	
	listint_t *cur = *head;
	int tab[2048], w = 0, e = 0;

	if (*head)
	{
		while (cur)
		{
			tab[w] = cur->n;
			cur = cur->next;
			w++;
		}

		while (e < w / 2)
		{
			if (tab[e] == tab[w - j - 1])
			{
				e++;
			}
			else
			{
				return (0);
			}
		}
	}
<<<<<<< HEAD

	return (1);
}

/**
 * main - LET'S ENTRY MAIN OF THE PRGGRAM.
 * Return: IT RETURN O ALWAYS ON  SUCCESS.
 */
int main(void)
{
	listint_t *head = NULL;
	int result = is_palindrome(&head);

	printf("Is the linked list a palindrome? %d\n", result);
	return (0);
=======
	
	return (1);
>>>>>>> 38e12368d1da2a179fcbf4bf16d98d065b425671
}
