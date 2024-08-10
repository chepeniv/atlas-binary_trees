#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance of a binary tree
 * @node: point from which to measure from
 *
 * Return: overal balance level
 */
int binary_tree_balance(const binary_tree_t *node)
{
	int count = 0;

	if (node == NULL)
		return (count);

	count += binary_tree_height(node->left);
	count -= binary_tree_height(node->right);

	return (count);
}

/**
 * binary_tree_height - measures the height of a tree
 * @node: point from which to count from
 *
 * Return: height measured
 */
size_t binary_tree_height(const binary_tree_t *node)
{
	size_t count = 0, left_count, right_count;

	if (node == NULL || (node->left == NULL && node->right == NULL))
		return (0);

	count = 1;
	left_count = binary_tree_height(node->left);
	right_count = binary_tree_height(node->right);

	if (left_count >= right_count)
		count += left_count;
	else
		count += right_count;

	return (count);
}
