#include "lists.h"
#include <stdlib.h>
/**
 * free_list - A function that frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	
	while (head)
	{
		temp = head;
		head = head->next;
		if(temp->str)
		  free(temp->str);
		free(temp);
	}
	
}
