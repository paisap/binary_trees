#include "binary_trees.h"
/**
 * *binary_tree_is_full - function that  concatenates two strings.
 * @tree: The first string.
 *
 * Return: 0 or NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	else
		return (0);
	return (0);
}
