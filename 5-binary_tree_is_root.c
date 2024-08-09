#include "binary_trees.h"

/**
 * binary_tree_is_root - checks whether given node is a root
 * @node: node to analyze
 *
 * Return: 1 for root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if
	(
	node == NULL ||
	node->parent != NULL
	)
		return (0);

	return (1);
}
