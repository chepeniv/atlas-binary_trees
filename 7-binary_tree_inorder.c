#include "binary_trees.h"

/**
 * binary_tree_inorder - operates on a given tree's nodes in inorder
 * @root: the top of the binary tree
 * @func: function to call with binary node data
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL || func == NULL)
		return;

	binary_tree_inorder(root->left, func);
	func(root->n);
	binary_tree_inorder(root->right, func);
}
