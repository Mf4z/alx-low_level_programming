#include "lists.h"

/**
  * add_node_end - function that adds a new node at the end of a list_t list
  *
  * @head: head and start of linked list
  * @str: string to be stored in list
  *
  * Return: Returns the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *currentNode;
	size_t len = 0;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	while (str[len])
		len++;

	newNode->len = len;
	newNode->next = NULL;
	currentNode = *head;

	if (currentNode == NULL)
		*head = newNode;
	else
	{
		while (currentNode->next != NULL)
			currentNode = currentNode->next;
		currentNode->next = newNode;
	}
	return (*head);
}
