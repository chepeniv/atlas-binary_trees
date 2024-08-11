#include "binary_trees.h"

/**
 * binary_tree_sibling - finds and the sibling of a given node
 * @node: point to find the sibling of
 *
 * Return: pointer to the sibling if found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *other;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	other = node->parent->left;

	/* if this is the left node, return the right */
	if (other == node)
		return (node->parent->right);

	/* this is the right node, return the left */
	return (other);
}
