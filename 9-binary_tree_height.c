#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 * @node: point from which to count from
 *
 * Return: height measured
 */
size_t binary_tree_height(const binary_tree_t *node)
{
	size_t count = 0;

	if (node == NULL || (node->left == NULL && node->right == NULL))
		return (0);

	count = 1;
	if (binary_tree_height(node->left) >= binary_tree_height(node->right))
		count += left_count;
	else
		count += right_count;
	return (count);
}
