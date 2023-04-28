#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that add a new node at
 * the beginning of a list_t list
 * @head: a pointer to the head of linked list
 * @str: the string that will be added to the linked list
 *
 * Return: adress of the new element, or Null if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	newnode->len = len;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
