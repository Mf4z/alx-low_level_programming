#include "lists.h"

/**
  * free_list - function that frees a list_t list
  *
  * @head: head of the linked list
  *
  * Return: Returns nothing
  */
void free_list(list_t *head)
{
	list_t *currentNode;

	while ((currentNode = head) != NULL)
	{
		head = head->next;
		free(currentNode->str);
		free(currentNode);
	}
}
