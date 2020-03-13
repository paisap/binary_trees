#include "binary_trees.h"
/**
 * *binary_tree_size - function that  concatenates two strings.
 * @tree: The first string.
 *
 * Return: 0 or NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		x += binary_tree_size(tree->left);
	if (tree->right != NULL)
		x += binary_tree_size(tree->right);
	return (x + 1);
}
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
/**
 * *binary_tree_is_perfect - function that  concatenates two strings.
 * @tree: The first string.
 *
 * Return: 0 or NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)

{
	int a = 0, b = 0, c = 2, x = 1;

	if (tree == NULL)
		return (0);
	a = (int)binary_tree_height(tree);
	b = (int)binary_tree_size(tree);
	while (x < a + 1)
		c *= 2, x++;
	if ((c - 1) == b || b == 0)
		return (1);
	return (0);
}
