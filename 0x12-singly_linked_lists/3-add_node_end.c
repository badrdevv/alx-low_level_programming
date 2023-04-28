#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that add a new node
 * at the end of a list_t list
 * @head: a pointer to the pointer to the first
 * element of the list
 * @str: the string that will be stored in the new node
 *
 * Return: the adress of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *currentnode;

	if (head == NULL || str == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	currentnode = *head;

	while (currentnode->next)
		currentnode = currentnode->next;

	currentnode->next = newnode;

	return (newnode);
}
