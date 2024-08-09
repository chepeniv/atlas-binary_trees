#include "binary_trees.h"

/**
 * binary_tree_delete -
 * @tree:
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *curr, *hold;

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
