#include "binary_trees.h"

/**
 * binary_tree_postorder - operates on a given tree's nodes in postorder
 * @root: the top of the binary tree
 * @func: function to call with binary node data
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL || func == NULL)
		return;

	binary_tree_postorder(root->left, func);
	binary_tree_postorder(root->right, func);
	func(root->n);
}
