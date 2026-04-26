#include <stdlib.h>
#include "lists.h"

/**
 * delete_head - deletes the head node
 * @head: double pointer to list head
 *
 * Return: 1 on success
 */
static int delete_head(dlistint_t **head)
{
	dlistint_t *tmp;

	tmp = *head;
	*head = tmp->next;

	if (*head != NULL)
		(*head)->prev = NULL;

	free(tmp);
	return (1);
}

/**
 * delete_node - deletes a middle or last node
 * @node: node to delete
 *
 * Return: 1 on success
 */
static int delete_node(dlistint_t *node)
{
	if (node->prev != NULL)
		node->prev->next = node->next;

	if (node->next != NULL)
		node->next->prev = node->prev;

	free(node);
	return (1);
}

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: double pointer to head
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
		return (delete_head(head));

	tmp = *head;
	i = 0;

	while (tmp != NULL)
	{
		if (i == index)
			return (delete_node(tmp));

		tmp = tmp->next;
		i++;
	}

	return (-1);
}
