#include "binary_trees.h"

/**
 * binary_tree_delete - traverses the entirerity of a tree and deletes it
 * node by node
 * @node: the tree to erase
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *node)
{
	binary_tree_t *left, *right;

	if (node == NULL)
		return;

	left = node->left;
	right = node->right;

	binary_tree_delete(left);
	binary_tree_delete(right);
	free(node);
}
