#include "binary_trees.h"
/**
 * *binary_tree_depth - function that  concatenates two strings.
 * @tree: The first string.
 *
 * Return: 0 or NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t x = -1;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		x = binary_tree_depth(tree->parent);
	return (x + 1);
}
