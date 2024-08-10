#include "binary_trees.h"

/**
 * binary_tree_preorder - operates on a given tree's nodes in preorder
 * @tree:
 * @func:
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *root, void (*func)(int))
{
	const binary_tree_t *current;
	/* create a list of pointers */

	if (root == NULL || func == NULL)
		return;

	current = root;
	while (current != NULL)
	{
		func(current->n);
		getchar();
		if (current->left != NULL)
			current = current->left;
		else if (current->right != NULL)
			current = current->right;
		else
		{
			/* infinite loop */
			current = current->parent;
			while (current->right == NULL)
				current = current->parent;
			current = current->right;
		}
	}
}
