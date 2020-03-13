#include "binary_trees.h"
/**
 * *binary_tree_height - function that  concatenates two strings.
 * @tree: The first string.
 *
 * Return: 0 or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x, y;

	if (tree && tree->left)
		x = binary_tree_height(tree->left) + 1;
	else
		x = 0;
	if (tree && tree->right)
		y = binary_tree_height(tree->right) + 1;
	else
		y = 0;
	if (x >= y)
		return (x);
	else
		return (y);
}
