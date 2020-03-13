#include "binary_trees.h"
/**
 * *binary_tree_sibling - function that  concatenates two strings.
 * @node: The first string.
 *
 * Return: 0 or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right != NULL && node->parent->left)
	{
		if (node->parent->right == node)
			return (node->parent->left);
		else
			return (node->parent->right);
	}
	return (NULL);
}
