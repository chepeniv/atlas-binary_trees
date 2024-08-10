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
	binary_tree_t **stacktop;

	stacktop = &malloc(sizeof(binary_tree_t));
	if (root == NULL || func == NULL || *stack == NULL)
		return;

	(*stacktop)->n = 0;
	(*stacktop)->parent = NULL;
	(*stacktop)->left = NULL;
	(*stacktop)->right = NULL;

	current = root;
	while (current != NULL)
	{
		func(current->n);
		getchar();
		if (current->left != NULL)
		{
			if (current->right != NULL)
				stack_push(stacktop, current->right)
			current = current->left;
		}
		else if (current->right != NULL)
			current = current->right;
		else
			current = stack_pop(top);
	}
}

binary_tree_t *stack_top(binary_tree_t **top)
{
	binary_tree_t *current, *old_top;

	current = (*top)->parent;

	old_top = *top;
	*top = (*top)->right;
	(*top)->left = NULL;
	free(old_top);

	return (current);
}

/**
 * stack_push - reimplements binary_tree_t as a stack
 * @top: top of the stack
 * @current: node to push to the top
 *
 * Return: void
 */
void stack_push(binary_tree_t **top, const binary_tree_t *current)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		exit(1);

	new->n = 0;
	new->parent = current;
	new->left = NULL;
	new->right = *top;
	(*top)->left = new;
	top = &new;
}
