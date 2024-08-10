#include "binary_trees.h"

/**
 * binary_tree_balance -
 * @node: point from which to measure from
 *
 * Return: overal balance level
 */
int binary_tree_balance(const binary_tree_t *node)
{
	int count = 0;

	if (node == NULL)
		return (0);
	if (node->left == NULL)
		count++;
	if (node->right == NULL)
		count--;

	count += binary_tree_nodes(node->left);
	count -= binary_tree_nodes(node->right);

	return (count);
}
