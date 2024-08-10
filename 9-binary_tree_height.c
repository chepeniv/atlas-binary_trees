#include "binary_trees.h"

/**
 * binary_tree_inorder - operates on a given tree's nodes in inorder
 * @node: the top of the binary tree
 * @func: function to call with binary node data
 *
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *node)
{
	size_t count = 0, left_count, right_count;

	if (node == NULL || (node->left == NULL && node->right == NULL))
		return (0);
	else
		count = 1;

	left_count = binary_tree_height(node->left);
	right_count = binary_tree_height(node->right);

	if (left_count >= right_count)
		count += left_count;
	else
		count += right_count;

	return (count);
}
