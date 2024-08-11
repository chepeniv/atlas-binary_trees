#include "binary_trees.h"

/**
 * binary_tree_full - determines whether or not a given tree is full or not
 * @node: point from which to analyze from
 *
 * Return: if true: 1, else: 0
 */
int binary_tree_is_full(const binary_tree_t *node)
{
	int left = 0, right = 0;

	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	if (node->left != NULL)
		left = binary_tree_is_full(node->left);
	if (node->right != NULL)
		right = binary_tree_is_full(node->right);

	return (left * right);
}
