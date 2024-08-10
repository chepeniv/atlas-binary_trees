#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the height of a tree
 * @node: point from which to count from
 *
 * Return: height measured
 */
size_t binary_tree_leaves(const binary_tree_t *node)
{
	size_t count = 0;

	if (node == NULL)
		return (0);

	count += binary_tree_is_leaf(node)
	count += binary_tree_leaves(node->left);
	count += binary_tree_leaves(node->right);

	return (count);
}
