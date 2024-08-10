#include "binary_trees.h"

/**
 * binary_tree_preorder - operates on a given tree's nodes in preorder
 * @tree:
 * @func:
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *curr, *hold;

	if (tree == NULL || func == NULL)
		return;

	curr = tree;
	while (curr != NULL)
	{
		if (curr->left != NULL)
			curr = curr->left;
		else if (curr->right != NULL)
			curr = curr->right;
		else
		{
			hold = curr;
			curr = curr->parent;
			if (curr != NULL)
			{
				if (curr->left == hold)
					curr->left = NULL;
				else
					curr->right = NULL;
			}
			free(hold);
		}
	}
}
