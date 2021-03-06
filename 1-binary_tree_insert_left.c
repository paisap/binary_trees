#include "binary_trees.h"
/**
 * *binary_tree_insert_left - function that  concatenates two strings.
 * @parent: The first string.
 * @value: the value
 * Return: the node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *aux;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = NULL;
	if (parent->left == NULL)
		parent->left = new;
	else
	{
		aux = parent->left;
		parent->left = new;
		parent->left->left = aux;
		aux->parent = new;
	}
	return (new);
}
