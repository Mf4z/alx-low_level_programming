#include "lists.h"

/**
  * list_len - function that returns the number of elements in a linked
  *
  * @h: pointer to node structure
  *
  * Return: Returns the number of nodes
  */
size_t list_len(const list_t *h)
{
	size_t numOfElems = 0;

	while (h != NULL)
	{
		h = h->next;

		numOfElems++;
	}

	return (numOfElems);
}
