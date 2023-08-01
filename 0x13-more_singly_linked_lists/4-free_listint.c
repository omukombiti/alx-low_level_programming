#include "lists.h"

/**
 *  * free_listint - free a linked list
 *   * @head: linked list
 *    */

void free_listint(listint_t *head)
{
		listint_t *ptr;

			if (head == NULL) /* account for no linked list */
						return;

				while (head != NULL) /* have the ptr keep track of head node and free */
						{
									ptr = head;
											head = head->next; /* move to the  next node while ptr frees prior */
													free(ptr);
														}
}
