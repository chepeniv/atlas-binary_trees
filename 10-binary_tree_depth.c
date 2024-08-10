#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 * @node: point from which to count from
 *
 * Return: height measured
 */
size_t binary_tree_depth(const binary_tree_t *node);
{
	size_t count;

	if (node == NULL)
		return (0);

	count = 1;
	count =+ binary_tree_depth(node->parent);
	return (count);
}
