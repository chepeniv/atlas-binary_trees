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
	const binary_tree_t *current;
	binary_tree_t **stacktop;

	if (root == NULL || func == NULL)
		return;

	stacktop = malloc(sizeof(void *));
	*stacktop = stack_create();

	current = root;
	while (current != NULL)
	{
		func(current->n);
		if (current->left != NULL)
		{
			if (current->right != NULL)
				stack_push(stacktop, current->right);
			current = current->left;
		}
		else if (current->right != NULL)
			current = current->right;
		else
			current = stack_pop(stacktop);
	}
	free(stacktop);
}
