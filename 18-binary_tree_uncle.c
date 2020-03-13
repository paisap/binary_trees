#include "binary_trees.h"
/**
 * *binary_tree_uncle - function that  concatenates two strings.
 * @node: The first string.
 *
 * Return: 0 or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *aux;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	aux = node->parent->parent;
	if (aux->left == node->parent)
		return (aux->right);
	else
		return (aux->left);
	return (NULL);
}
