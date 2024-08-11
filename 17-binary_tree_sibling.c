#include "binary_trees.h"

int is_perfect_eng(const binary_tree_t *node);

/**
 * binary_tree_is_perfect - determines whether a given tree is perfect
 * @node: point from which to analyze from
 *
 * Return: if true: 1, else: 0
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
