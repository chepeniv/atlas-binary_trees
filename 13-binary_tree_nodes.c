#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes with at least one child
 * @node: point from which to count from
 *
 * Return: number of nodes found
 */
size_t binary_tree_nodes(const binary_tree_t *node)
{
	size_t count;

	if (node == NULL || (node->left == NULL && node->right == NULL))
		return (0);

	count = 1;
	count += binary_tree_nodes(node->left);
	count += binary_tree_nodes(node->right);

	return (count);
}
