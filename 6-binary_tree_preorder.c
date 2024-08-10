#include "binary_trees.h"

/**
 * binary_tree_preorder - operates on a given tree's nodes in preorder
 * @root: the top of the binary tree
 * @func: function to call with binary node data
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL || func == NULL)
		return;

	func(root->n);
	binary_tree_preorder(root->left, func);
	binary_tree_preorder(root->right, func);
}
