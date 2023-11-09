#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a new node at
 * a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_Node, *head;
	unsigned int k;

	new_Node = NULL;
	if (idx == 0)
		new_Node = add_dnodeint(h, n);
	else
	{
		head = *h;
		k = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (k == idx)
			{
				if (head->next == NULL)
					new_Node = add_dnodeint_end(h, n);
				else
				{
					new_Node = malloc(sizeof(dlistint_t));
					if (new_Node != NULL)
					{
						new_Node->n = n;
						new_Node->next = head->next;
						new_Node->prev = head;
						head->next->prev = new_Node;
						head->next = new_Node;
					}
				}
				break;
			}
			head = head->next;
			k++;
		}
	}

	return (new_Node);
}
