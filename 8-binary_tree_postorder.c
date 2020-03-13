#include "binary_trees.h"
/**
 * *binary_tree_postorder - function that  concatenates two strings.
 * @tree: The first string.
 * @func: int
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
