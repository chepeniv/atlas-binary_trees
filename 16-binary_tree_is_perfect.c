#include "binary_trees.h"

int is_perfect_eng(const binary_tree_t *node);

/**
 * binary_tree_is_perfect - determines whether a given tree is perfect
 * @node: point from which to analyze from
 *
 * Return: if true: 1, else: 0
 */
int binary_tree_is_perfect(const binary_tree_t *node)
{
	int left = 0, right = 0;

	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);

	if (node->left != NULL)
		left = is_perfect_eng(node->left);
	if (node->right != NULL)
		right = is_perfect_eng(node->right);

	if (left == right && left != 0)
		return (1);

	return (0);
}

/**
 * is_perfect_eng - measures and compares the heights of subtrees
 * @node: point from which to analyze from
 *
 * Return: height of left and right subtrees if equal, otherwise 0
 */
int is_perfect_eng(const binary_tree_t *node)
{
	int left = 1, right = 1;

	if (node->left == NULL && node->right == NULL)
		return (1);

	if ((node->left != NULL && node->right != NULL))
	{
		left += is_perfect_eng(node->left);
		right += is_perfect_eng(node->right);
		if (left == right)
			return (left + 1);
	}

	return (0);
}
