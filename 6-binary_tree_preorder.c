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

/**
 * stack_create - creates a stack by repurposing binary nodes
 *
 * Return: pointer to the top of the stack
 */
binary_tree_t *stack_create(void)
{
	binary_tree_t *top;

	top = malloc(sizeof(binary_tree_t));
	if (top == NULL)
		exit(1);

	top->n = 0;
	top->parent = NULL;
	top->left = NULL;
	top->right = NULL;

	return (top);
}

/**
 * stack_pop - removes top of the stack
 * @top: top of the stack
 *
 * Return: pointer to binary node
 */
binary_tree_t *stack_pop(binary_tree_t **top)
{
	binary_tree_t *current, *old_top;

	current = (*top)->parent;

	old_top = *top;
	*top = (*top)->right;
	if (*top != NULL)
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
void stack_push(binary_tree_t **top, binary_tree_t *current)
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
	*top = new;
}
