#include "binary_trees.h"

/**
 * binary_tree_size - measures the height of a tree
 * @node: point from which to count from
 *
 * Return: height measured
 */
size_t binary_tree_size(const binary_tree_t *node)
{
	size_t count = 0;

	if (node == NULL)
		return (0);

	count = 1;
	count += binary_tree_size(node->left);
	count += binary_tree_size(node->right);

	return (count);
}
