#include "binary_trees.h"

/**
 * binary_tree_depth - measures how deep a node in a tree is
 * @node: node to measure
 *
 * Return: depth measured
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count;

	if (node->parent == NULL || node == NULL)
		return (0);

	count = 1;
	count += binary_tree_depth(node->parent);
	return (count);
}
