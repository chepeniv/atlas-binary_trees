#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a given node
 * @node: point to find the uncle of
 *
 * Return: pointer to the uncle if found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand, *uncle;

	if (
	node == NULL ||
	node->parent == NULL ||
	node->parent->parent == NULL)
		return (NULL);

	grand = node->parent->parent;
	uncle = grand->left;

	/* check if uncle is the parent */
	if (uncle->left == node || uncle->right == node)
		return (grand->right);

	/* uncle is not the parent */
	return (uncle);
}
