#include "binary_trees.h"
/**
 * *binary_tree_is_root - function that  concatenates two strings.
 * @node: The first string.
 * Return: the node.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
