#include "lists.h"

/**
 *  * free_dlistint - Frees a linked dlistint_t list.
 *   * @head: The head of the dlistint_t list.
 *    */
void free_dlistint(dlistint_t *head)
{
        dlistint_t *temp;

	if (head == NULL)
		return;
        
	while (head != NULL)
	{
	        tmp = head;
	        head = temp->next;
	        free(temp);

	}
}

