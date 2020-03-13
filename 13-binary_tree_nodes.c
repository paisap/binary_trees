#include "binary_trees.h"
/**
 * *binary_tree_nodes - function that  concatenates two strings.
 * @tree: The first string.
 *
 *Return: 0 or NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		x += binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		x += binary_tree_nodes(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (x + 1);
}
